#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEndOfGameGameflowClient { 
    bool running;
    std::string observerServerIp;
    uint16_t observerServerPort; 
  };
  void to_json(json& j, const LolEndOfGameGameflowClient& v) {
    j["running"] = v.running; 
    j["observerServerIp"] = v.observerServerIp; 
    j["observerServerPort"] = v.observerServerPort; 
  }
  void from_json(const json& j, LolEndOfGameGameflowClient& v) {
    v.running = j.at("running").get<bool>(); 
    v.observerServerIp = j.at("observerServerIp").get<std::string>(); 
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>(); 
  }
}