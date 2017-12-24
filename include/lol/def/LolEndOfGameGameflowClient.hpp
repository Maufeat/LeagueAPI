#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEndOfGameGameflowClient { 
    std::string observerServerIp;
    uint16_t observerServerPort;
    bool running; 
  };
  inline void to_json(json& j, const LolEndOfGameGameflowClient& v) {
    j["observerServerIp"] = v.observerServerIp; 
    j["observerServerPort"] = v.observerServerPort; 
    j["running"] = v.running; 
  }
  inline void from_json(const json& j, LolEndOfGameGameflowClient& v) {
    v.observerServerIp = j.at("observerServerIp").get<std::string>(); 
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>(); 
    v.running = j.at("running").get<bool>(); 
  }
}