#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLoginSessionStates.hpp"
namespace lol {
  struct LolLobbyLoginSession { 
    LolLobbyLoginSessionStates state;
    std::string username;
    std::string userAuthToken;
    json gasToken;
    uint64_t accountId;
    uint64_t summonerId;
    std::string idToken;
    std::string puuid;
    bool isNewPlayer;
    bool connected; 
  };
  inline void to_json(json& j, const LolLobbyLoginSession& v) {
    j["state"] = v.state; 
    j["username"] = v.username; 
    j["userAuthToken"] = v.userAuthToken; 
    j["gasToken"] = v.gasToken; 
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["idToken"] = v.idToken; 
    j["puuid"] = v.puuid; 
    j["isNewPlayer"] = v.isNewPlayer; 
    j["connected"] = v.connected; 
  }
  inline void from_json(const json& j, LolLobbyLoginSession& v) {
    v.state = j.at("state").get<LolLobbyLoginSessionStates>(); 
    v.username = j.at("username").get<std::string>(); 
    v.userAuthToken = j.at("userAuthToken").get<std::string>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.isNewPlayer = j.at("isNewPlayer").get<bool>(); 
    v.connected = j.at("connected").get<bool>(); 
  }
}