#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChatChatDomainConfig { 
    std::optional<std::string> CustomGameDomainName;
    std::optional<std::string> TeamBuilderDomainName;
    std::optional<std::string> RankedTeamDomainName;
    std::optional<std::string> ClubDomainName;
    std::optional<std::string> CustomTeamDomainName;
    std::optional<std::string> PublicDomainName;
    std::optional<std::string> PrivateDomainName;
    std::optional<std::string> P2PDomainName;
    std::optional<std::string> ChampSelectDomainName;
    std::optional<std::string> PostGameDomainName; 
  };
  void to_json(json& j, const LolChatChatDomainConfig& v) {
  j["CustomGameDomainName"] = v.CustomGameDomainName; 
  j["TeamBuilderDomainName"] = v.TeamBuilderDomainName; 
  j["RankedTeamDomainName"] = v.RankedTeamDomainName; 
  j["ClubDomainName"] = v.ClubDomainName; 
  j["CustomTeamDomainName"] = v.CustomTeamDomainName; 
  j["PublicDomainName"] = v.PublicDomainName; 
  j["PrivateDomainName"] = v.PrivateDomainName; 
  j["P2PDomainName"] = v.P2PDomainName; 
  j["ChampSelectDomainName"] = v.ChampSelectDomainName; 
  j["PostGameDomainName"] = v.PostGameDomainName; 
  }
  void from_json(const json& j, LolChatChatDomainConfig& v) {
  v.CustomGameDomainName = j.at("CustomGameDomainName").get<std::optional<std::string>>(); 
  v.TeamBuilderDomainName = j.at("TeamBuilderDomainName").get<std::optional<std::string>>(); 
  v.RankedTeamDomainName = j.at("RankedTeamDomainName").get<std::optional<std::string>>(); 
  v.ClubDomainName = j.at("ClubDomainName").get<std::optional<std::string>>(); 
  v.CustomTeamDomainName = j.at("CustomTeamDomainName").get<std::optional<std::string>>(); 
  v.PublicDomainName = j.at("PublicDomainName").get<std::optional<std::string>>(); 
  v.PrivateDomainName = j.at("PrivateDomainName").get<std::optional<std::string>>(); 
  v.P2PDomainName = j.at("P2PDomainName").get<std::optional<std::string>>(); 
  v.ChampSelectDomainName = j.at("ChampSelectDomainName").get<std::optional<std::string>>(); 
  v.PostGameDomainName = j.at("PostGameDomainName").get<std::optional<std::string>>(); 
  }
}