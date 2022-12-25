package com.MultiProducerConsumer.kafkamulti;


import java.util.Date;
import java.util.Properties;

import org.apache.kafka.clients.producer.KafkaProducer;
import org.apache.kafka.clients.producer.ProducerRecord;
import org.apache.kafka.common.serialization.ByteArraySerializer;
import org.apache.kafka.common.serialization.StringSerializer;

public class MessageProducer {

Properties prop = new Properties();
	
	private void init() throws InterruptedException {
		prop.setProperty("bootstrap.servers", "localhost:9092");
		prop.setProperty("kafka.topic.name", "test");
		KafkaProducer<String, byte[]> producer = new KafkaProducer<String, byte[]>(this.prop,new StringSerializer(),new ByteArraySerializer());
		
		for (int x=0;x<1000;x++) {
			byte[] payload = (x+ "  Event Message at the time: " + new Date()).getBytes();
			System.out.println(x+ "  Event Message at the time: " + new Date());
			ProducerRecord<String, byte[]> record = new ProducerRecord<String, byte[]>(prop.getProperty("kafka.topic.name"), payload);
			producer.send(record);
			Thread.sleep(1000);
			
		}
		producer.close();
		}
	
	public static void main(String[] args) throws InterruptedException{
		MessageProducer produce = new MessageProducer();
		produce.init();
	}
}
