#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolGameflowGameflowGameClient { 
    uint16_t serverPort;
    uint16_t observerServerPort;
    bool running;
    std::string serverIp;
    std::string observerServerIp;
    bool visible; 
  };
  void to_json(json& j, const LolGameflowGameflowGameClient& v) {
    j["serverPort"] = v.serverPort; 
    j["observerServerPort"] = v.observerServerPort; 
    j["running"] = v.running; 
    j["serverIp"] = v.serverIp; 
    j["observerServerIp"] = v.observerServerIp; 
    j["visible"] = v.visible; 
  }
  void from_json(const json& j, LolGameflowGameflowGameClient& v) {
    v.serverPort = j.at("serverPort").get<uint16_t>(); 
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>(); 
    v.running = j.at("running").get<bool>(); 
    v.serverIp = j.at("serverIp").get<std::string>(); 
    v.observerServerIp = j.at("observerServerIp").get<std::string>(); 
    v.visible = j.at("visible").get<bool>(); 
  }
}