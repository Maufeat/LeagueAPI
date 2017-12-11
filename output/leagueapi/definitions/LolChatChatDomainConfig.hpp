#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChatChatDomainConfig { /**/ 
    std::optional<std::string> ClubDomainName;/**/
    std::optional<std::string> PublicDomainName;/**/
    std::optional<std::string> CustomGameDomainName;/**/
    std::optional<std::string> PrivateDomainName;/**/
    std::optional<std::string> CustomTeamDomainName;/**/
    std::optional<std::string> RankedTeamDomainName;/**/
    std::optional<std::string> P2PDomainName;/**/
    std::optional<std::string> PostGameDomainName;/**/
    std::optional<std::string> TeamBuilderDomainName;/**/
    std::optional<std::string> ChampSelectDomainName;/**/
  };
  static void to_json(json& j, const LolChatChatDomainConfig& v) { 
    j["ClubDomainName"] = v.ClubDomainName;
    j["PublicDomainName"] = v.PublicDomainName;
    j["CustomGameDomainName"] = v.CustomGameDomainName;
    j["PrivateDomainName"] = v.PrivateDomainName;
    j["CustomTeamDomainName"] = v.CustomTeamDomainName;
    j["RankedTeamDomainName"] = v.RankedTeamDomainName;
    j["P2PDomainName"] = v.P2PDomainName;
    j["PostGameDomainName"] = v.PostGameDomainName;
    j["TeamBuilderDomainName"] = v.TeamBuilderDomainName;
    j["ChampSelectDomainName"] = v.ChampSelectDomainName;
  }
  static void from_json(const json& j, LolChatChatDomainConfig& v) { 
    v.ClubDomainName = j.at("ClubDomainName").get<std::optional<std::string>>(); 
    v.PublicDomainName = j.at("PublicDomainName").get<std::optional<std::string>>(); 
    v.CustomGameDomainName = j.at("CustomGameDomainName").get<std::optional<std::string>>(); 
    v.PrivateDomainName = j.at("PrivateDomainName").get<std::optional<std::string>>(); 
    v.CustomTeamDomainName = j.at("CustomTeamDomainName").get<std::optional<std::string>>(); 
    v.RankedTeamDomainName = j.at("RankedTeamDomainName").get<std::optional<std::string>>(); 
    v.P2PDomainName = j.at("P2PDomainName").get<std::optional<std::string>>(); 
    v.PostGameDomainName = j.at("PostGameDomainName").get<std::optional<std::string>>(); 
    v.TeamBuilderDomainName = j.at("TeamBuilderDomainName").get<std::optional<std::string>>(); 
    v.ChampSelectDomainName = j.at("ChampSelectDomainName").get<std::optional<std::string>>(); 
  }
} 