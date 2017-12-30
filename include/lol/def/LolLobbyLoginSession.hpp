#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLoginSessionStates.hpp"
namespace lol {
  struct LolLobbyLoginSession { 
    std::string userAuthToken;
    bool isNewPlayer;
    std::string username;
    LolLobbyLoginSessionStates state;
    uint64_t accountId;
    bool connected;
    std::string idToken;
    uint64_t summonerId;
    std::string puuid;
    json gasToken; 
  };
  inline void to_json(json& j, const LolLobbyLoginSession& v) {
    j["userAuthToken"] = v.userAuthToken; 
    j["isNewPlayer"] = v.isNewPlayer; 
    j["username"] = v.username; 
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["connected"] = v.connected; 
    j["idToken"] = v.idToken; 
    j["summonerId"] = v.summonerId; 
    j["puuid"] = v.puuid; 
    j["gasToken"] = v.gasToken; 
  }
  inline void from_json(const json& j, LolLobbyLoginSession& v) {
    v.userAuthToken = j.at("userAuthToken").get<std::string>(); 
    v.isNewPlayer = j.at("isNewPlayer").get<bool>(); 
    v.username = j.at("username").get<std::string>(); 
    v.state = j.at("state").get<LolLobbyLoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.connected = j.at("connected").get<bool>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
  }
}