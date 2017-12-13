#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEndOfGameGameflowClient { 
    bool running;
    uint16_t observerServerPort;
    std::string observerServerIp; 
  };
  void to_json(json& j, const LolEndOfGameGameflowClient& v) {
  j["running"] = v.running; 
  j["observerServerPort"] = v.observerServerPort; 
  j["observerServerIp"] = v.observerServerIp; 
  }
  void from_json(const json& j, LolEndOfGameGameflowClient& v) {
  v.running = j.at("running").get<bool>(); 
  v.observerServerPort = j.at("observerServerPort").get<uint16_t>(); 
  v.observerServerIp = j.at("observerServerIp").get<std::string>(); 
  }
}