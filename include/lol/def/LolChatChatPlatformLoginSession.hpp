#pragma once
#include "../base_def.hpp" 
#include "LolChatChatPlatformLoginSessionState.hpp"
namespace lol {
  struct LolChatChatPlatformLoginSession { 
    LolChatChatPlatformLoginSessionState state;
    uint64_t accountId;
    std::string username;
    std::string userAuthToken;
    json gasToken;
    std::optional<uint64_t> summonerId;
    std::string idToken;
    std::string puuid;
    bool isNewPlayer; 
  };
  inline void to_json(json& j, const LolChatChatPlatformLoginSession& v) {
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["username"] = v.username; 
    j["userAuthToken"] = v.userAuthToken; 
    j["gasToken"] = v.gasToken; 
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    j["idToken"] = v.idToken; 
    j["puuid"] = v.puuid; 
    j["isNewPlayer"] = v.isNewPlayer; 
  }
  inline void from_json(const json& j, LolChatChatPlatformLoginSession& v) {
    v.state = j.at("state").get<LolChatChatPlatformLoginSessionState>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.username = j.at("username").get<std::string>(); 
    v.userAuthToken = j.at("userAuthToken").get<std::string>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<std::optional<uint64_t>>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.isNewPlayer = j.at("isNewPlayer").get<bool>(); 
  }
}