package SingleProducerConsumer.kafka.service;

import org.springframework.kafka.annotation.KafkaListener;
import org.springframework.stereotype.Service;

@Service


public class Consumer {
	
	@KafkaListener(topics = "test_Topic" , groupId = "test_group")
	public void listenToTopic(String recievedMessage) {
		System.out.println("The message has been recieved" + recievedMessage);
	}

}
