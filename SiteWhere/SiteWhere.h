/**
 * SiteWhere.h - Library for interacting with SiteWhere via MQTT.
 * Copyright 2013 Reveal Technologies LLC.
 */
#ifndef SiteWhere_h
#define SiteWhere_h

#include <Arduino.h>
#include <Client.h>
#include <PubSubClient.h>

class SiteWhere {
	public:
		SiteWhere(Client& client, uint8_t* mqttIp, uint16_t mqttPort);
		boolean connect(char* clientId);
		boolean loop();
	private:
		Client* _client;
		PubSubClient* _mqtt;
		static void onResponseMessage(char* topic, byte* payload, unsigned int length);
};

#endif