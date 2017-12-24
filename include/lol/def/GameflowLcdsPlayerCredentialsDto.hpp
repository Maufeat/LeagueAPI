#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct GameflowLcdsPlayerCredentialsDto { 
    std::string observerEncryptionKey;
    uint64_t summonerId;
    uint64_t gameId;
    std::string observerServerIp;
    bool observer;
    uint16_t observerServerPort;
    uint16_t serverPort;
    std::string encryptionKey;
    std::string serverIp; 
  };
  inline void to_json(json& j, const GameflowLcdsPlayerCredentialsDto& v) {
    j["observerEncryptionKey"] = v.observerEncryptionKey; 
    j["summonerId"] = v.summonerId; 
    j["gameId"] = v.gameId; 
    j["observerServerIp"] = v.observerServerIp; 
    j["observer"] = v.observer; 
    j["observerServerPort"] = v.observerServerPort; 
    j["serverPort"] = v.serverPort; 
    j["encryptionKey"] = v.encryptionKey; 
    j["serverIp"] = v.serverIp; 
  }
  inline void from_json(const json& j, GameflowLcdsPlayerCredentialsDto& v) {
    v.observerEncryptionKey = j.at("observerEncryptionKey").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.observerServerIp = j.at("observerServerIp").get<std::string>(); 
    v.observer = j.at("observer").get<bool>(); 
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>(); 
    v.serverPort = j.at("serverPort").get<uint16_t>(); 
    v.encryptionKey = j.at("encryptionKey").get<std::string>(); 
    v.serverIp = j.at("serverIp").get<std::string>(); 
  }
}