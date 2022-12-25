package com.MultiProducerConsumer.kafkamulti;

import java.util.Arrays;
import java.util.Properties;

import org.apache.kafka.clients.consumer.ConsumerRecord;
import org.apache.kafka.clients.consumer.ConsumerRecords;
import org.apache.kafka.clients.consumer.KafkaConsumer;


public class MessageConsumer {

	static final String TOPIC = "test";
	static final String GROUP = "test_group";
	
	public static void main(String[] args) {
		Properties props = new Properties();
		props.put("bootstrap.servers", "localhost:9092");
		props.put("group.id", GROUP);
		props.put("auto.commit.interval.ms", "1000");
		props.put("key.deserializer", "org.apache.kafka.common.serialization.StringDeserializer");
		props.put("value.deserializer", "org.apache.kafka.common.serialization.StringDeserializer");
		
		try (KafkaConsumer<String, String> consumer = new KafkaConsumer<>(props);){
			consumer.subscribe(Arrays.asList(TOPIC));
			
			for (int x=0;x<1000;x++) {
				ConsumerRecords<String, String> records = consumer.poll(1000L);
				System.out.println("               ");
				System.out.println(" Size :"+ records.count());
				System.out.println("               ");
				for (ConsumerRecord<String, String> record : records) {
					System.out.println("               ");
					System.out.println(x+ " Event Recieved "+ record.value());
					System.out.println("               ");
					}
			}
	}
		System.out.println("End");
		
}
	
}




