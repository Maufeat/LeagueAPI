#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatChatDomainConfig { 
    std::optional<std::string> P2PDomainName;
    std::optional<std::string> PublicDomainName;
    std::optional<std::string> CustomGameDomainName;
    std::optional<std::string> RankedTeamDomainName;
    std::optional<std::string> TeamBuilderDomainName;
    std::optional<std::string> PrivateDomainName;
    std::optional<std::string> CustomTeamDomainName;
    std::optional<std::string> ChampSelectDomainName;
    std::optional<std::string> PostGameDomainName;
    std::optional<std::string> ClubDomainName; 
  };
  inline void to_json(json& j, const LolChatChatDomainConfig& v) {
    if(v.P2PDomainName)
      j["P2PDomainName"] = *v.P2PDomainName;
    if(v.PublicDomainName)
      j["PublicDomainName"] = *v.PublicDomainName;
    if(v.CustomGameDomainName)
      j["CustomGameDomainName"] = *v.CustomGameDomainName;
    if(v.RankedTeamDomainName)
      j["RankedTeamDomainName"] = *v.RankedTeamDomainName;
    if(v.TeamBuilderDomainName)
      j["TeamBuilderDomainName"] = *v.TeamBuilderDomainName;
    if(v.PrivateDomainName)
      j["PrivateDomainName"] = *v.PrivateDomainName;
    if(v.CustomTeamDomainName)
      j["CustomTeamDomainName"] = *v.CustomTeamDomainName;
    if(v.ChampSelectDomainName)
      j["ChampSelectDomainName"] = *v.ChampSelectDomainName;
    if(v.PostGameDomainName)
      j["PostGameDomainName"] = *v.PostGameDomainName;
    if(v.ClubDomainName)
      j["ClubDomainName"] = *v.ClubDomainName;
  }
  inline void from_json(const json& j, LolChatChatDomainConfig& v) {
    if(auto it = j.find("P2PDomainName"); it != j.end() && !it->is_null())
      v.P2PDomainName = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("PublicDomainName"); it != j.end() && !it->is_null())
      v.PublicDomainName = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("CustomGameDomainName"); it != j.end() && !it->is_null())
      v.CustomGameDomainName = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("RankedTeamDomainName"); it != j.end() && !it->is_null())
      v.RankedTeamDomainName = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("TeamBuilderDomainName"); it != j.end() && !it->is_null())
      v.TeamBuilderDomainName = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("PrivateDomainName"); it != j.end() && !it->is_null())
      v.PrivateDomainName = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("CustomTeamDomainName"); it != j.end() && !it->is_null())
      v.CustomTeamDomainName = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("ChampSelectDomainName"); it != j.end() && !it->is_null())
      v.ChampSelectDomainName = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("PostGameDomainName"); it != j.end() && !it->is_null())
      v.PostGameDomainName = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("ClubDomainName"); it != j.end() && !it->is_null())
      v.ClubDomainName = it->get<std::optional<std::string>>(); 
  }
}