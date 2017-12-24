#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLoginSessionStates.hpp"
namespace lol {
  struct LolLobbyLoginSession { 
    std::string username;
    json gasToken;
    uint64_t summonerId;
    uint64_t accountId;
    std::string idToken;
    LolLobbyLoginSessionStates state;
    std::string puuid;
    std::string userAuthToken;
    bool connected;
    bool isNewPlayer; 
  };
  inline void to_json(json& j, const LolLobbyLoginSession& v) {
    j["username"] = v.username; 
    j["gasToken"] = v.gasToken; 
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
    j["idToken"] = v.idToken; 
    j["state"] = v.state; 
    j["puuid"] = v.puuid; 
    j["userAuthToken"] = v.userAuthToken; 
    j["connected"] = v.connected; 
    j["isNewPlayer"] = v.isNewPlayer; 
  }
  inline void from_json(const json& j, LolLobbyLoginSession& v) {
    v.username = j.at("username").get<std::string>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.state = j.at("state").get<LolLobbyLoginSessionStates>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.userAuthToken = j.at("userAuthToken").get<std::string>(); 
    v.connected = j.at("connected").get<bool>(); 
    v.isNewPlayer = j.at("isNewPlayer").get<bool>(); 
  }
}