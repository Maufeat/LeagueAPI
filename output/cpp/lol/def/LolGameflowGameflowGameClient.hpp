#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolGameflowGameflowGameClient { 
    bool running;
    bool visible;
    uint16_t observerServerPort;
    std::string observerServerIp;
    uint16_t serverPort;
    std::string serverIp; 
  };
  void to_json(json& j, const LolGameflowGameflowGameClient& v) {
  j["running"] = v.running; 
  j["visible"] = v.visible; 
  j["observerServerPort"] = v.observerServerPort; 
  j["observerServerIp"] = v.observerServerIp; 
  j["serverPort"] = v.serverPort; 
  j["serverIp"] = v.serverIp; 
  }
  void from_json(const json& j, LolGameflowGameflowGameClient& v) {
  v.running = j.at("running").get<bool>(); 
  v.visible = j.at("visible").get<bool>(); 
  v.observerServerPort = j.at("observerServerPort").get<uint16_t>(); 
  v.observerServerIp = j.at("observerServerIp").get<std::string>(); 
  v.serverPort = j.at("serverPort").get<uint16_t>(); 
  v.serverIp = j.at("serverIp").get<std::string>(); 
  }
}