#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct GameflowLcdsPlayerCredentialsDto { 
    uint16_t observerServerPort;
    uint16_t serverPort;
    uint64_t summonerId;
    bool observer;
    uint64_t gameId;
    std::string encryptionKey;
    std::string observerServerIp;
    std::string observerEncryptionKey;
    std::string serverIp; 
  };
  inline void to_json(json& j, const GameflowLcdsPlayerCredentialsDto& v) {
    j["observerServerPort"] = v.observerServerPort; 
    j["serverPort"] = v.serverPort; 
    j["summonerId"] = v.summonerId; 
    j["observer"] = v.observer; 
    j["gameId"] = v.gameId; 
    j["encryptionKey"] = v.encryptionKey; 
    j["observerServerIp"] = v.observerServerIp; 
    j["observerEncryptionKey"] = v.observerEncryptionKey; 
    j["serverIp"] = v.serverIp; 
  }
  inline void from_json(const json& j, GameflowLcdsPlayerCredentialsDto& v) {
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>(); 
    v.serverPort = j.at("serverPort").get<uint16_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.observer = j.at("observer").get<bool>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.encryptionKey = j.at("encryptionKey").get<std::string>(); 
    v.observerServerIp = j.at("observerServerIp").get<std::string>(); 
    v.observerEncryptionKey = j.at("observerEncryptionKey").get<std::string>(); 
    v.serverIp = j.at("serverIp").get<std::string>(); 
  }
}