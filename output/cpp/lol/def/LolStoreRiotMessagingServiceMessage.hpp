#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolStoreRiotMessagingServiceMessage { 
    int64_t timestamp;
    std::string resource;
    std::string payload;
    std::string version;
    std::string service; 
  };
  void to_json(json& j, const LolStoreRiotMessagingServiceMessage& v) {
  j["timestamp"] = v.timestamp; 
  j["resource"] = v.resource; 
  j["payload"] = v.payload; 
  j["version"] = v.version; 
  j["service"] = v.service; 
  }
  void from_json(const json& j, LolStoreRiotMessagingServiceMessage& v) {
  v.timestamp = j.at("timestamp").get<int64_t>(); 
  v.resource = j.at("resource").get<std::string>(); 
  v.payload = j.at("payload").get<std::string>(); 
  v.version = j.at("version").get<std::string>(); 
  v.service = j.at("service").get<std::string>(); 
  }
}