#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksPerkPageResource { 
    std::string name;
    int32_t order;
    int32_t id;
    int32_t subStyleId;
    std::vector<int32_t> selectedPerkIds;
    bool isEditable;
    bool current;
    bool isActive;
    bool isValid;
    int32_t formatVersion;
    int32_t primaryStyleId;
    bool isDeletable; 
  };
  inline void to_json(json& j, const LolPerksPerkPageResource& v) {
    j["name"] = v.name; 
    j["order"] = v.order; 
    j["id"] = v.id; 
    j["subStyleId"] = v.subStyleId; 
    j["selectedPerkIds"] = v.selectedPerkIds; 
    j["isEditable"] = v.isEditable; 
    j["current"] = v.current; 
    j["isActive"] = v.isActive; 
    j["isValid"] = v.isValid; 
    j["formatVersion"] = v.formatVersion; 
    j["primaryStyleId"] = v.primaryStyleId; 
    j["isDeletable"] = v.isDeletable; 
  }
  inline void from_json(const json& j, LolPerksPerkPageResource& v) {
    v.name = j.at("name").get<std::string>(); 
    v.order = j.at("order").get<int32_t>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.subStyleId = j.at("subStyleId").get<int32_t>(); 
    v.selectedPerkIds = j.at("selectedPerkIds").get<std::vector<int32_t>>(); 
    v.isEditable = j.at("isEditable").get<bool>(); 
    v.current = j.at("current").get<bool>(); 
    v.isActive = j.at("isActive").get<bool>(); 
    v.isValid = j.at("isValid").get<bool>(); 
    v.formatVersion = j.at("formatVersion").get<int32_t>(); 
    v.primaryStyleId = j.at("primaryStyleId").get<int32_t>(); 
    v.isDeletable = j.at("isDeletable").get<bool>(); 
  }
}