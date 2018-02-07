#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolGameflowGameflowGameClient { 
    std::string serverIp;
    uint16_t serverPort;
    std::string observerServerIp;
    uint16_t observerServerPort;
    bool running;
    bool visible; 
  };
  inline void to_json(json& j, const LolGameflowGameflowGameClient& v) {
    j["serverIp"] = v.serverIp; 
    j["serverPort"] = v.serverPort; 
    j["observerServerIp"] = v.observerServerIp; 
    j["observerServerPort"] = v.observerServerPort; 
    j["running"] = v.running; 
    j["visible"] = v.visible; 
  }
  inline void from_json(const json& j, LolGameflowGameflowGameClient& v) {
    v.serverIp = j.at("serverIp").get<std::string>(); 
    v.serverPort = j.at("serverPort").get<uint16_t>(); 
    v.observerServerIp = j.at("observerServerIp").get<std::string>(); 
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>(); 
    v.running = j.at("running").get<bool>(); 
    v.visible = j.at("visible").get<bool>(); 
  }
}