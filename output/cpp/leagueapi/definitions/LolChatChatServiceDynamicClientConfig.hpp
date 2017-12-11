#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolChatLcuSocialConfig.hpp>
#include <leagueapi/definitions/LolChatChatDomainConfig.hpp>

namespace leagueapi {
  struct LolChatChatServiceDynamicClientConfig { /**/ 
    std::optional<LolChatChatDomainConfig> ChatDomain;/**/
    std::optional<LolChatLcuSocialConfig> LcuSocial;/**/
  };
  static void to_json(json& j, const LolChatChatServiceDynamicClientConfig& v) { 
    j["ChatDomain"] = v.ChatDomain;
    j["LcuSocial"] = v.LcuSocial;
  }
  static void from_json(const json& j, LolChatChatServiceDynamicClientConfig& v) { 
    v.ChatDomain = j.at("ChatDomain").get<std::optional<LolChatChatDomainConfig>>(); 
    v.LcuSocial = j.at("LcuSocial").get<std::optional<LolChatLcuSocialConfig>>(); 
  }
} 