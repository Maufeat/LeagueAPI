#pragma once
#include "../base_def.hpp" 
#include "LolChatLcuSocialConfig.hpp"
#include "LolChatChatDomainConfig.hpp"
namespace lol {
  struct LolChatChatServiceDynamicClientConfig { 
    std::optional<LolChatLcuSocialConfig> LcuSocial;
    std::optional<LolChatChatDomainConfig> ChatDomain; 
  };
  inline void to_json(json& j, const LolChatChatServiceDynamicClientConfig& v) {
    if(v.LcuSocial)
      j["LcuSocial"] = *v.LcuSocial;
    if(v.ChatDomain)
      j["ChatDomain"] = *v.ChatDomain;
  }
  inline void from_json(const json& j, LolChatChatServiceDynamicClientConfig& v) {
    if(auto it = j.find("LcuSocial"); it != j.end() && !it->is_null())
      v.LcuSocial = it->get<std::optional<LolChatLcuSocialConfig>>(); 
    if(auto it = j.find("ChatDomain"); it != j.end() && !it->is_null())
      v.ChatDomain = it->get<std::optional<LolChatChatDomainConfig>>(); 
  }
}