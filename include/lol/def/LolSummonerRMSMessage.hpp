#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSummonerRMSMessage { 
    std::string payload;
    int64_t timestamp; 
  };
  inline void to_json(json& j, const LolSummonerRMSMessage& v) {
    j["payload"] = v.payload; 
    j["timestamp"] = v.timestamp; 
  }
  inline void from_json(const json& j, LolSummonerRMSMessage& v) {
    v.payload = j.at("payload").get<std::string>(); 
    v.timestamp = j.at("timestamp").get<int64_t>(); 
  }
}