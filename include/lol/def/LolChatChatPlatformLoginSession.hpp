#pragma once
#include "../base_def.hpp" 
#include "LolChatChatPlatformLoginSessionState.hpp"
namespace lol {
  struct LolChatChatPlatformLoginSession { 
    std::string username;
    json gasToken;
    std::optional<uint64_t> summonerId;
    uint64_t accountId;
    std::string idToken;
    LolChatChatPlatformLoginSessionState state;
    std::string puuid;
    std::string userAuthToken;
    bool isNewPlayer; 
  };
  inline void to_json(json& j, const LolChatChatPlatformLoginSession& v) {
    j["username"] = v.username; 
    j["gasToken"] = v.gasToken; 
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    j["accountId"] = v.accountId; 
    j["idToken"] = v.idToken; 
    j["state"] = v.state; 
    j["puuid"] = v.puuid; 
    j["userAuthToken"] = v.userAuthToken; 
    j["isNewPlayer"] = v.isNewPlayer; 
  }
  inline void from_json(const json& j, LolChatChatPlatformLoginSession& v) {
    v.username = j.at("username").get<std::string>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<std::optional<uint64_t>>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.state = j.at("state").get<LolChatChatPlatformLoginSessionState>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.userAuthToken = j.at("userAuthToken").get<std::string>(); 
    v.isNewPlayer = j.at("isNewPlayer").get<bool>(); 
  }
}