#pragma once
#include "../base_def.hpp" 
#include "LolLoginLoginSessionStates.hpp"
#include "LolLoginLoginQueue.hpp"
#include "LolLoginLoginError.hpp"
namespace lol {
  struct LolLoginLoginSession { 
    LolLoginLoginSessionStates state;
    std::string username;
    std::string userAuthToken;
    json gasToken;
    uint64_t accountId;
    std::optional<uint64_t> summonerId;
    std::optional<LolLoginLoginQueue> queueStatus;
    std::optional<LolLoginLoginError> error;
    std::string idToken;
    std::string puuid;
    bool isNewPlayer;
    bool connected; 
  };
  inline void to_json(json& j, const LolLoginLoginSession& v) {
    j["state"] = v.state; 
    j["username"] = v.username; 
    j["userAuthToken"] = v.userAuthToken; 
    j["gasToken"] = v.gasToken; 
    j["accountId"] = v.accountId; 
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    if(v.queueStatus)
      j["queueStatus"] = *v.queueStatus;
    if(v.error)
      j["error"] = *v.error;
    j["idToken"] = v.idToken; 
    j["puuid"] = v.puuid; 
    j["isNewPlayer"] = v.isNewPlayer; 
    j["connected"] = v.connected; 
  }
  inline void from_json(const json& j, LolLoginLoginSession& v) {
    v.state = j.at("state").get<LolLoginLoginSessionStates>(); 
    v.username = j.at("username").get<std::string>(); 
    v.userAuthToken = j.at("userAuthToken").get<std::string>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<std::optional<uint64_t>>(); 
    if(auto it = j.find("queueStatus"); it != j.end() && !it->is_null())
      v.queueStatus = it->get<std::optional<LolLoginLoginQueue>>(); 
    if(auto it = j.find("error"); it != j.end() && !it->is_null())
      v.error = it->get<std::optional<LolLoginLoginError>>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.isNewPlayer = j.at("isNewPlayer").get<bool>(); 
    v.connected = j.at("connected").get<bool>(); 
  }
}