#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLoginLoginError.hpp>
#include <lol/def/LolLoginLoginQueue.hpp>
#include <lol/def/LolLoginLoginSessionStates.hpp>
namespace lol {
  struct LolLoginLoginSession { 
    bool connected;
    std::string puuid;
    std::string username;
    std::optional<LolLoginLoginError> error;
    std::string userAuthToken;
    std::optional<LolLoginLoginQueue> queueStatus;
    LolLoginLoginSessionStates state;
    std::optional<uint64_t> summonerId;
    uint64_t accountId;
    json gasToken;
    std::string idToken;
    bool isNewPlayer; 
  };
  void to_json(json& j, const LolLoginLoginSession& v) {
  j["connected"] = v.connected; 
  j["puuid"] = v.puuid; 
  j["username"] = v.username; 
  j["error"] = v.error; 
  j["userAuthToken"] = v.userAuthToken; 
  j["queueStatus"] = v.queueStatus; 
  j["state"] = v.state; 
  j["summonerId"] = v.summonerId; 
  j["accountId"] = v.accountId; 
  j["gasToken"] = v.gasToken; 
  j["idToken"] = v.idToken; 
  j["isNewPlayer"] = v.isNewPlayer; 
  }
  void from_json(const json& j, LolLoginLoginSession& v) {
  v.connected = j.at("connected").get<bool>(); 
  v.puuid = j.at("puuid").get<std::string>(); 
  v.username = j.at("username").get<std::string>(); 
  v.error = j.at("error").get<std::optional<LolLoginLoginError>>(); 
  v.userAuthToken = j.at("userAuthToken").get<std::string>(); 
  v.queueStatus = j.at("queueStatus").get<std::optional<LolLoginLoginQueue>>(); 
  v.state = j.at("state").get<LolLoginLoginSessionStates>(); 
  v.summonerId = j.at("summonerId").get<std::optional<uint64_t>>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  v.gasToken = j.at("gasToken").get<json>(); 
  v.idToken = j.at("idToken").get<std::string>(); 
  v.isNewPlayer = j.at("isNewPlayer").get<bool>(); 
  }
}