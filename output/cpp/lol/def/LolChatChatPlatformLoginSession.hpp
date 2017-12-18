#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChatChatPlatformLoginSessionState.hpp>
namespace lol {
  struct LolChatChatPlatformLoginSession { 
    bool isNewPlayer;
    std::string username;
    std::string userAuthToken;
    std::string idToken;
    std::optional<uint64_t> summonerId;
    LolChatChatPlatformLoginSessionState state;
    json gasToken;
    std::string puuid;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolChatChatPlatformLoginSession& v) {
    j["isNewPlayer"] = v.isNewPlayer; 
    j["username"] = v.username; 
    j["userAuthToken"] = v.userAuthToken; 
    j["idToken"] = v.idToken; 
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    j["state"] = v.state; 
    j["gasToken"] = v.gasToken; 
    j["puuid"] = v.puuid; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolChatChatPlatformLoginSession& v) {
    v.isNewPlayer = j.at("isNewPlayer").get<bool>(); 
    v.username = j.at("username").get<std::string>(); 
    v.userAuthToken = j.at("userAuthToken").get<std::string>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<std::optional<uint64_t>>(); 
    v.state = j.at("state").get<LolChatChatPlatformLoginSessionState>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}