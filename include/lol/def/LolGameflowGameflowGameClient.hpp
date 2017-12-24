#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolGameflowGameflowGameClient { 
    std::string observerServerIp;
    uint16_t serverPort;
    uint16_t observerServerPort;
    bool visible;
    bool running;
    std::string serverIp; 
  };
  inline void to_json(json& j, const LolGameflowGameflowGameClient& v) {
    j["observerServerIp"] = v.observerServerIp; 
    j["serverPort"] = v.serverPort; 
    j["observerServerPort"] = v.observerServerPort; 
    j["visible"] = v.visible; 
    j["running"] = v.running; 
    j["serverIp"] = v.serverIp; 
  }
  inline void from_json(const json& j, LolGameflowGameflowGameClient& v) {
    v.observerServerIp = j.at("observerServerIp").get<std::string>(); 
    v.serverPort = j.at("serverPort").get<uint16_t>(); 
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>(); 
    v.visible = j.at("visible").get<bool>(); 
    v.running = j.at("running").get<bool>(); 
    v.serverIp = j.at("serverIp").get<std::string>(); 
  }
}