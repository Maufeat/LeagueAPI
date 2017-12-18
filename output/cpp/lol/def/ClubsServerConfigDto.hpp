#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ClubsServerConfigDto { 
    bool clubNominationsEnabled;
    int32_t minClubNameLength;
    int32_t clubNominationsMaxPending;
    int32_t minClubTagLength;
    int32_t clubMotdMaxLength;
    int32_t maxClubNameLength;
    int32_t clubTagRequirementsMinMemberLevel;
    int32_t maxClubTagLength;
    int32_t maxActiveClubs;
    int32_t clubTagRequirementMinMembers;
    int32_t clubTagRequirementMinGames;
    int32_t clubDescriptionMaxLength; 
  };
  inline void to_json(json& j, const ClubsServerConfigDto& v) {
    j["clubNominationsEnabled"] = v.clubNominationsEnabled; 
    j["minClubNameLength"] = v.minClubNameLength; 
    j["clubNominationsMaxPending"] = v.clubNominationsMaxPending; 
    j["minClubTagLength"] = v.minClubTagLength; 
    j["clubMotdMaxLength"] = v.clubMotdMaxLength; 
    j["maxClubNameLength"] = v.maxClubNameLength; 
    j["clubTagRequirementsMinMemberLevel"] = v.clubTagRequirementsMinMemberLevel; 
    j["maxClubTagLength"] = v.maxClubTagLength; 
    j["maxActiveClubs"] = v.maxActiveClubs; 
    j["clubTagRequirementMinMembers"] = v.clubTagRequirementMinMembers; 
    j["clubTagRequirementMinGames"] = v.clubTagRequirementMinGames; 
    j["clubDescriptionMaxLength"] = v.clubDescriptionMaxLength; 
  }
  inline void from_json(const json& j, ClubsServerConfigDto& v) {
    v.clubNominationsEnabled = j.at("clubNominationsEnabled").get<bool>(); 
    v.minClubNameLength = j.at("minClubNameLength").get<int32_t>(); 
    v.clubNominationsMaxPending = j.at("clubNominationsMaxPending").get<int32_t>(); 
    v.minClubTagLength = j.at("minClubTagLength").get<int32_t>(); 
    v.clubMotdMaxLength = j.at("clubMotdMaxLength").get<int32_t>(); 
    v.maxClubNameLength = j.at("maxClubNameLength").get<int32_t>(); 
    v.clubTagRequirementsMinMemberLevel = j.at("clubTagRequirementsMinMemberLevel").get<int32_t>(); 
    v.maxClubTagLength = j.at("maxClubTagLength").get<int32_t>(); 
    v.maxActiveClubs = j.at("maxActiveClubs").get<int32_t>(); 
    v.clubTagRequirementMinMembers = j.at("clubTagRequirementMinMembers").get<int32_t>(); 
    v.clubTagRequirementMinGames = j.at("clubTagRequirementMinGames").get<int32_t>(); 
    v.clubDescriptionMaxLength = j.at("clubDescriptionMaxLength").get<int32_t>(); 
  }
}