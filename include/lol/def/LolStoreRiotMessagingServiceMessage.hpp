#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStoreRiotMessagingServiceMessage { 
    int64_t timestamp;
    std::string version;
    std::string payload;
    std::string resource;
    std::string service; 
  };
  inline void to_json(json& j, const LolStoreRiotMessagingServiceMessage& v) {
    j["timestamp"] = v.timestamp; 
    j["version"] = v.version; 
    j["payload"] = v.payload; 
    j["resource"] = v.resource; 
    j["service"] = v.service; 
  }
  inline void from_json(const json& j, LolStoreRiotMessagingServiceMessage& v) {
    v.timestamp = j.at("timestamp").get<int64_t>(); 
    v.version = j.at("version").get<std::string>(); 
    v.payload = j.at("payload").get<std::string>(); 
    v.resource = j.at("resource").get<std::string>(); 
    v.service = j.at("service").get<std::string>(); 
  }
}