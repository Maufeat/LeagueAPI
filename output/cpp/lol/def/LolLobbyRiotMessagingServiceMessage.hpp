#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyRiotMessagingServiceMessage { 
    std::string service;
    std::string resource;
    std::string payload;
    int64_t timestamp;
    std::string version; 
  };
  inline void to_json(json& j, const LolLobbyRiotMessagingServiceMessage& v) {
    j["service"] = v.service; 
    j["resource"] = v.resource; 
    j["payload"] = v.payload; 
    j["timestamp"] = v.timestamp; 
    j["version"] = v.version; 
  }
  inline void from_json(const json& j, LolLobbyRiotMessagingServiceMessage& v) {
    v.service = j.at("service").get<std::string>(); 
    v.resource = j.at("resource").get<std::string>(); 
    v.payload = j.at("payload").get<std::string>(); 
    v.timestamp = j.at("timestamp").get<int64_t>(); 
    v.version = j.at("version").get<std::string>(); 
  }
}