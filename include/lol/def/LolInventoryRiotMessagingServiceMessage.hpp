#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolInventoryRiotMessagingServiceMessage { 
    std::string resource;
    std::string service;
    std::string version;
    int64_t timestamp;
    std::string payload; 
  };
  inline void to_json(json& j, const LolInventoryRiotMessagingServiceMessage& v) {
    j["resource"] = v.resource; 
    j["service"] = v.service; 
    j["version"] = v.version; 
    j["timestamp"] = v.timestamp; 
    j["payload"] = v.payload; 
  }
  inline void from_json(const json& j, LolInventoryRiotMessagingServiceMessage& v) {
    v.resource = j.at("resource").get<std::string>(); 
    v.service = j.at("service").get<std::string>(); 
    v.version = j.at("version").get<std::string>(); 
    v.timestamp = j.at("timestamp").get<int64_t>(); 
    v.payload = j.at("payload").get<std::string>(); 
  }
}