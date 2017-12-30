#pragma once
#include "../base_def.hpp" 
#include "LolLoginLoginSessionStates.hpp"
#include "LolLoginLoginError.hpp"
#include "LolLoginLoginQueue.hpp"
namespace lol {
  struct LolLoginLoginSession { 
    bool isNewPlayer;
    std::string username;
    LolLoginLoginSessionStates state;
    uint64_t accountId;
    bool connected;
    std::string puuid;
    std::optional<LolLoginLoginQueue> queueStatus;
    std::string userAuthToken;
    json gasToken;
    std::optional<uint64_t> summonerId;
    std::optional<LolLoginLoginError> error;
    std::string idToken; 
  };
  inline void to_json(json& j, const LolLoginLoginSession& v) {
    j["isNewPlayer"] = v.isNewPlayer; 
    j["username"] = v.username; 
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["connected"] = v.connected; 
    j["puuid"] = v.puuid; 
    if(v.queueStatus)
      j["queueStatus"] = *v.queueStatus;
    j["userAuthToken"] = v.userAuthToken; 
    j["gasToken"] = v.gasToken; 
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    if(v.error)
      j["error"] = *v.error;
    j["idToken"] = v.idToken; 
  }
  inline void from_json(const json& j, LolLoginLoginSession& v) {
    v.isNewPlayer = j.at("isNewPlayer").get<bool>(); 
    v.username = j.at("username").get<std::string>(); 
    v.state = j.at("state").get<LolLoginLoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.connected = j.at("connected").get<bool>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    if(auto it = j.find("queueStatus"); it != j.end() && !it->is_null())
      v.queueStatus = it->get<std::optional<LolLoginLoginQueue>>(); 
    v.userAuthToken = j.at("userAuthToken").get<std::string>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<std::optional<uint64_t>>(); 
    if(auto it = j.find("error"); it != j.end() && !it->is_null())
      v.error = it->get<std::optional<LolLoginLoginError>>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
  }
}