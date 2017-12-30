#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEndOfGameGameflowClient { 
    uint16_t observerServerPort;
    bool running;
    std::string observerServerIp; 
  };
  inline void to_json(json& j, const LolEndOfGameGameflowClient& v) {
    j["observerServerPort"] = v.observerServerPort; 
    j["running"] = v.running; 
    j["observerServerIp"] = v.observerServerIp; 
  }
  inline void from_json(const json& j, LolEndOfGameGameflowClient& v) {
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>(); 
    v.running = j.at("running").get<bool>(); 
    v.observerServerIp = j.at("observerServerIp").get<std::string>(); 
  }
}