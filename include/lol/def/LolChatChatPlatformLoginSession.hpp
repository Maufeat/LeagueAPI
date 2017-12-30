#pragma once
#include "../base_def.hpp" 
#include "LolChatChatPlatformLoginSessionState.hpp"
namespace lol {
  struct LolChatChatPlatformLoginSession { 
    std::string userAuthToken;
    bool isNewPlayer;
    std::string username;
    LolChatChatPlatformLoginSessionState state;
    uint64_t accountId;
    std::string idToken;
    std::optional<uint64_t> summonerId;
    std::string puuid;
    json gasToken; 
  };
  inline void to_json(json& j, const LolChatChatPlatformLoginSession& v) {
    j["userAuthToken"] = v.userAuthToken; 
    j["isNewPlayer"] = v.isNewPlayer; 
    j["username"] = v.username; 
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["idToken"] = v.idToken; 
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    j["puuid"] = v.puuid; 
    j["gasToken"] = v.gasToken; 
  }
  inline void from_json(const json& j, LolChatChatPlatformLoginSession& v) {
    v.userAuthToken = j.at("userAuthToken").get<std::string>(); 
    v.isNewPlayer = j.at("isNewPlayer").get<bool>(); 
    v.username = j.at("username").get<std::string>(); 
    v.state = j.at("state").get<LolChatChatPlatformLoginSessionState>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<std::optional<uint64_t>>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
  }
}