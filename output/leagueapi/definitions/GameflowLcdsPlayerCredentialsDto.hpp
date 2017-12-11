#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct GameflowLcdsPlayerCredentialsDto { /**/ 
    uint64_t summonerId;/**/
    std::string observerServerIp;/**/
    std::string observerEncryptionKey;/**/
    bool observer;/**/
    uint16_t observerServerPort;/**/
    uint64_t gameId;/**/
    std::string serverIp;/**/
    uint16_t serverPort;/**/
    std::string encryptionKey;/**/
  };
  static void to_json(json& j, const GameflowLcdsPlayerCredentialsDto& v) { 
    j["summonerId"] = v.summonerId;
    j["observerServerIp"] = v.observerServerIp;
    j["observerEncryptionKey"] = v.observerEncryptionKey;
    j["observer"] = v.observer;
    j["observerServerPort"] = v.observerServerPort;
    j["gameId"] = v.gameId;
    j["serverIp"] = v.serverIp;
    j["serverPort"] = v.serverPort;
    j["encryptionKey"] = v.encryptionKey;
  }
  static void from_json(const json& j, GameflowLcdsPlayerCredentialsDto& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.observerServerIp = j.at("observerServerIp").get<std::string>(); 
    v.observerEncryptionKey = j.at("observerEncryptionKey").get<std::string>(); 
    v.observer = j.at("observer").get<bool>(); 
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.serverIp = j.at("serverIp").get<std::string>(); 
    v.serverPort = j.at("serverPort").get<uint16_t>(); 
    v.encryptionKey = j.at("encryptionKey").get<std::string>(); 
  }
} 