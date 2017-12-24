#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEndOfGameRMSMessage { 
    std::string payload;
    int64_t timestamp; 
  };
  inline void to_json(json& j, const LolEndOfGameRMSMessage& v) {
    j["payload"] = v.payload; 
    j["timestamp"] = v.timestamp; 
  }
  inline void from_json(const json& j, LolEndOfGameRMSMessage& v) {
    v.payload = j.at("payload").get<std::string>(); 
    v.timestamp = j.at("timestamp").get<int64_t>(); 
  }
}