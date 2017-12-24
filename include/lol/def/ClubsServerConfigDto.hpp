#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ClubsServerConfigDto { 
    int32_t maxClubTagLength;
    bool clubNominationsEnabled;
    int32_t clubTagRequirementsMinMemberLevel;
    int32_t clubTagRequirementMinGames;
    int32_t maxActiveClubs;
    int32_t clubNominationsMaxPending;
    int32_t clubMotdMaxLength;
    int32_t minClubNameLength;
    int32_t maxClubNameLength;
    int32_t minClubTagLength;
    int32_t clubDescriptionMaxLength;
    int32_t clubTagRequirementMinMembers; 
  };
  inline void to_json(json& j, const ClubsServerConfigDto& v) {
    j["maxClubTagLength"] = v.maxClubTagLength; 
    j["clubNominationsEnabled"] = v.clubNominationsEnabled; 
    j["clubTagRequirementsMinMemberLevel"] = v.clubTagRequirementsMinMemberLevel; 
    j["clubTagRequirementMinGames"] = v.clubTagRequirementMinGames; 
    j["maxActiveClubs"] = v.maxActiveClubs; 
    j["clubNominationsMaxPending"] = v.clubNominationsMaxPending; 
    j["clubMotdMaxLength"] = v.clubMotdMaxLength; 
    j["minClubNameLength"] = v.minClubNameLength; 
    j["maxClubNameLength"] = v.maxClubNameLength; 
    j["minClubTagLength"] = v.minClubTagLength; 
    j["clubDescriptionMaxLength"] = v.clubDescriptionMaxLength; 
    j["clubTagRequirementMinMembers"] = v.clubTagRequirementMinMembers; 
  }
  inline void from_json(const json& j, ClubsServerConfigDto& v) {
    v.maxClubTagLength = j.at("maxClubTagLength").get<int32_t>(); 
    v.clubNominationsEnabled = j.at("clubNominationsEnabled").get<bool>(); 
    v.clubTagRequirementsMinMemberLevel = j.at("clubTagRequirementsMinMemberLevel").get<int32_t>(); 
    v.clubTagRequirementMinGames = j.at("clubTagRequirementMinGames").get<int32_t>(); 
    v.maxActiveClubs = j.at("maxActiveClubs").get<int32_t>(); 
    v.clubNominationsMaxPending = j.at("clubNominationsMaxPending").get<int32_t>(); 
    v.clubMotdMaxLength = j.at("clubMotdMaxLength").get<int32_t>(); 
    v.minClubNameLength = j.at("minClubNameLength").get<int32_t>(); 
    v.maxClubNameLength = j.at("maxClubNameLength").get<int32_t>(); 
    v.minClubTagLength = j.at("minClubTagLength").get<int32_t>(); 
    v.clubDescriptionMaxLength = j.at("clubDescriptionMaxLength").get<int32_t>(); 
    v.clubTagRequirementMinMembers = j.at("clubTagRequirementMinMembers").get<int32_t>(); 
  }
}