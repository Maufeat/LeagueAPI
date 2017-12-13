#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChatLcuSocialConfig.hpp>
#include <lol/def/LolChatChatDomainConfig.hpp>
namespace lol {
  struct LolChatChatServiceDynamicClientConfig { 
    std::optional<LolChatChatDomainConfig> ChatDomain;
    std::optional<LolChatLcuSocialConfig> LcuSocial; 
  };
  void to_json(json& j, const LolChatChatServiceDynamicClientConfig& v) {
    if(v.ChatDomain)
      j["ChatDomain"] = *v.ChatDomain;
    if(v.LcuSocial)
      j["LcuSocial"] = *v.LcuSocial;
  }
  void from_json(const json& j, LolChatChatServiceDynamicClientConfig& v) {
    if(auto it = j.find("ChatDomain"); it != j.end() && !it->is_null())
      v.ChatDomain = it->get<std::optional<LolChatChatDomainConfig>>(); 
    if(auto it = j.find("LcuSocial"); it != j.end() && !it->is_null())
      v.LcuSocial = it->get<std::optional<LolChatLcuSocialConfig>>(); 
  }
}