#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolInventoryRiotMessagingServiceMessage { 
    std::string payload;
    int64_t timestamp;
    std::string service;
    std::string resource;
    std::string version; 
  };
  inline void to_json(json& j, const LolInventoryRiotMessagingServiceMessage& v) {
    j["payload"] = v.payload; 
    j["timestamp"] = v.timestamp; 
    j["service"] = v.service; 
    j["resource"] = v.resource; 
    j["version"] = v.version; 
  }
  inline void from_json(const json& j, LolInventoryRiotMessagingServiceMessage& v) {
    v.payload = j.at("payload").get<std::string>(); 
    v.timestamp = j.at("timestamp").get<int64_t>(); 
    v.service = j.at("service").get<std::string>(); 
    v.resource = j.at("resource").get<std::string>(); 
    v.version = j.at("version").get<std::string>(); 
  }
}