#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLoginLoginError.hpp>
#include <lol/def/LolLoginLoginQueue.hpp>
#include <lol/def/LolLoginLoginSessionStates.hpp>
namespace lol {
  struct LolLoginLoginSession { 
    std::string username;
    bool isNewPlayer;
    std::optional<LolLoginLoginQueue> queueStatus;
    LolLoginLoginSessionStates state;
    json gasToken;
    std::optional<LolLoginLoginError> error;
    std::string userAuthToken;
    std::string idToken;
    bool connected;
    uint64_t accountId;
    std::string puuid;
    std::optional<uint64_t> summonerId; 
  };
  void to_json(json& j, const LolLoginLoginSession& v) {
  j["username"] = v.username; 
  j["isNewPlayer"] = v.isNewPlayer; 
  j["queueStatus"] = v.queueStatus; 
  j["state"] = v.state; 
  j["gasToken"] = v.gasToken; 
  j["error"] = v.error; 
  j["userAuthToken"] = v.userAuthToken; 
  j["idToken"] = v.idToken; 
  j["connected"] = v.connected; 
  j["accountId"] = v.accountId; 
  j["puuid"] = v.puuid; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolLoginLoginSession& v) {
  v.username = j.at("username").get<std::string>(); 
  v.isNewPlayer = j.at("isNewPlayer").get<bool>(); 
  v.queueStatus = j.at("queueStatus").get<std::optional<LolLoginLoginQueue>>(); 
  v.state = j.at("state").get<LolLoginLoginSessionStates>(); 
  v.gasToken = j.at("gasToken").get<json>(); 
  v.error = j.at("error").get<std::optional<LolLoginLoginError>>(); 
  v.userAuthToken = j.at("userAuthToken").get<std::string>(); 
  v.idToken = j.at("idToken").get<std::string>(); 
  v.connected = j.at("connected").get<bool>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  v.puuid = j.at("puuid").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<std::optional<uint64_t>>(); 
  }
}