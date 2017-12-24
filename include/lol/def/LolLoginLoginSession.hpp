#pragma once
#include "../base_def.hpp" 
#include "LolLoginLoginSessionStates.hpp"
#include "LolLoginLoginQueue.hpp"
#include "LolLoginLoginError.hpp"
namespace lol {
  struct LolLoginLoginSession { 
    std::string username;
    std::string idToken;
    bool isNewPlayer;
    bool connected;
    std::string puuid;
    std::optional<LolLoginLoginError> error;
    std::optional<LolLoginLoginQueue> queueStatus;
    json gasToken;
    std::optional<uint64_t> summonerId;
    uint64_t accountId;
    LolLoginLoginSessionStates state;
    std::string userAuthToken; 
  };
  inline void to_json(json& j, const LolLoginLoginSession& v) {
    j["username"] = v.username; 
    j["idToken"] = v.idToken; 
    j["isNewPlayer"] = v.isNewPlayer; 
    j["connected"] = v.connected; 
    j["puuid"] = v.puuid; 
    if(v.error)
      j["error"] = *v.error;
    if(v.queueStatus)
      j["queueStatus"] = *v.queueStatus;
    j["gasToken"] = v.gasToken; 
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    j["accountId"] = v.accountId; 
    j["state"] = v.state; 
    j["userAuthToken"] = v.userAuthToken; 
  }
  inline void from_json(const json& j, LolLoginLoginSession& v) {
    v.username = j.at("username").get<std::string>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.isNewPlayer = j.at("isNewPlayer").get<bool>(); 
    v.connected = j.at("connected").get<bool>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    if(auto it = j.find("error"); it != j.end() && !it->is_null())
      v.error = it->get<std::optional<LolLoginLoginError>>(); 
    if(auto it = j.find("queueStatus"); it != j.end() && !it->is_null())
      v.queueStatus = it->get<std::optional<LolLoginLoginQueue>>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<std::optional<uint64_t>>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.state = j.at("state").get<LolLoginLoginSessionStates>(); 
    v.userAuthToken = j.at("userAuthToken").get<std::string>(); 
  }
}