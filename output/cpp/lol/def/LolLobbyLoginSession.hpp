#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLoginSessionStates.hpp>
namespace lol {
  struct LolLobbyLoginSession { 
    bool isNewPlayer;
    bool connected;
    std::string username;
    std::string userAuthToken;
    std::string idToken;
    uint64_t summonerId;
    LolLobbyLoginSessionStates state;
    json gasToken;
    std::string puuid;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolLobbyLoginSession& v) {
  j["isNewPlayer"] = v.isNewPlayer; 
  j["connected"] = v.connected; 
  j["username"] = v.username; 
  j["userAuthToken"] = v.userAuthToken; 
  j["idToken"] = v.idToken; 
  j["summonerId"] = v.summonerId; 
  j["state"] = v.state; 
  j["gasToken"] = v.gasToken; 
  j["puuid"] = v.puuid; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolLobbyLoginSession& v) {
  v.isNewPlayer = j.at("isNewPlayer").get<bool>(); 
  v.connected = j.at("connected").get<bool>(); 
  v.username = j.at("username").get<std::string>(); 
  v.userAuthToken = j.at("userAuthToken").get<std::string>(); 
  v.idToken = j.at("idToken").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.state = j.at("state").get<LolLobbyLoginSessionStates>(); 
  v.gasToken = j.at("gasToken").get<json>(); 
  v.puuid = j.at("puuid").get<std::string>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}