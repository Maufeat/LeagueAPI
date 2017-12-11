#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPerksPerkPageResource { /**/ 
    bool current;/**/
    bool isDeletable;/**/
    int32_t id;/**/
    bool isActive;/**/
    int32_t order;/**/
    std::string name;/**/
    bool isEditable;/**/
    bool isValid;/**/
    int32_t subStyleId;/**/
    int32_t formatVersion;/**/
    std::vector<int32_t> selectedPerkIds;/**/
    int32_t primaryStyleId;/**/
  };
  static void to_json(json& j, const LolPerksPerkPageResource& v) { 
    j["current"] = v.current;
    j["isDeletable"] = v.isDeletable;
    j["id"] = v.id;
    j["isActive"] = v.isActive;
    j["order"] = v.order;
    j["name"] = v.name;
    j["isEditable"] = v.isEditable;
    j["isValid"] = v.isValid;
    j["subStyleId"] = v.subStyleId;
    j["formatVersion"] = v.formatVersion;
    j["selectedPerkIds"] = v.selectedPerkIds;
    j["primaryStyleId"] = v.primaryStyleId;
  }
  static void from_json(const json& j, LolPerksPerkPageResource& v) { 
    v.current = j.at("current").get<bool>(); 
    v.isDeletable = j.at("isDeletable").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.isActive = j.at("isActive").get<bool>(); 
    v.order = j.at("order").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.isEditable = j.at("isEditable").get<bool>(); 
    v.isValid = j.at("isValid").get<bool>(); 
    v.subStyleId = j.at("subStyleId").get<int32_t>(); 
    v.formatVersion = j.at("formatVersion").get<int32_t>(); 
    v.selectedPerkIds = j.at("selectedPerkIds").get<std::vector<int32_t>>(); 
    v.primaryStyleId = j.at("primaryStyleId").get<int32_t>(); 
  }
} 