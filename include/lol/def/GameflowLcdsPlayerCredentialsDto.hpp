#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct GameflowLcdsPlayerCredentialsDto { 
    uint64_t gameId;
    std::string serverIp;
    uint16_t serverPort;
    std::string encryptionKey;
    bool observer;
    std::string observerServerIp;
    uint16_t observerServerPort;
    std::string observerEncryptionKey;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const GameflowLcdsPlayerCredentialsDto& v) {
    j["gameId"] = v.gameId; 
    j["serverIp"] = v.serverIp; 
    j["serverPort"] = v.serverPort; 
    j["encryptionKey"] = v.encryptionKey; 
    j["observer"] = v.observer; 
    j["observerServerIp"] = v.observerServerIp; 
    j["observerServerPort"] = v.observerServerPort; 
    j["observerEncryptionKey"] = v.observerEncryptionKey; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, GameflowLcdsPlayerCredentialsDto& v) {
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.serverIp = j.at("serverIp").get<std::string>(); 
    v.serverPort = j.at("serverPort").get<uint16_t>(); 
    v.encryptionKey = j.at("encryptionKey").get<std::string>(); 
    v.observer = j.at("observer").get<bool>(); 
    v.observerServerIp = j.at("observerServerIp").get<std::string>(); 
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>(); 
    v.observerEncryptionKey = j.at("observerEncryptionKey").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}