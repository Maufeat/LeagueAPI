#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct GameflowLcdsPlayerCredentialsDto { 
    uint16_t serverPort;
    uint16_t observerServerPort;
    uint64_t gameId;
    bool observer;
    std::string serverIp;
    std::string observerEncryptionKey;
    std::string encryptionKey;
    uint64_t summonerId;
    std::string observerServerIp; 
  };
  inline void to_json(json& j, const GameflowLcdsPlayerCredentialsDto& v) {
    j["serverPort"] = v.serverPort; 
    j["observerServerPort"] = v.observerServerPort; 
    j["gameId"] = v.gameId; 
    j["observer"] = v.observer; 
    j["serverIp"] = v.serverIp; 
    j["observerEncryptionKey"] = v.observerEncryptionKey; 
    j["encryptionKey"] = v.encryptionKey; 
    j["summonerId"] = v.summonerId; 
    j["observerServerIp"] = v.observerServerIp; 
  }
  inline void from_json(const json& j, GameflowLcdsPlayerCredentialsDto& v) {
    v.serverPort = j.at("serverPort").get<uint16_t>(); 
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.observer = j.at("observer").get<bool>(); 
    v.serverIp = j.at("serverIp").get<std::string>(); 
    v.observerEncryptionKey = j.at("observerEncryptionKey").get<std::string>(); 
    v.encryptionKey = j.at("encryptionKey").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.observerServerIp = j.at("observerServerIp").get<std::string>(); 
  }
}