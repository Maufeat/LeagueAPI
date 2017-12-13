#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChatChatDomainConfig.hpp>
#include <lol/def/LolChatLcuSocialConfig.hpp>
namespace lol {
  struct LolChatChatServiceDynamicClientConfig { 
    std::optional<LolChatChatDomainConfig> ChatDomain;
    std::optional<LolChatLcuSocialConfig> LcuSocial; 
  };
  void to_json(json& j, const LolChatChatServiceDynamicClientConfig& v) {
  j["ChatDomain"] = v.ChatDomain; 
  j["LcuSocial"] = v.LcuSocial; 
  }
  void from_json(const json& j, LolChatChatServiceDynamicClientConfig& v) {
  v.ChatDomain = j.at("ChatDomain").get<std::optional<LolChatChatDomainConfig>>(); 
  v.LcuSocial = j.at("LcuSocial").get<std::optional<LolChatLcuSocialConfig>>(); 
  }
}