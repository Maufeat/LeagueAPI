#pragma once
#include "../base_def.hpp" 
#include "CollectionsLcdsSlotEntry.hpp"
namespace lol {
  struct CollectionsLcdsSpellBookPageDTO { 
    std::string name;
    uint32_t pageId;
    uint64_t summonerId;
    uint64_t createDate;
    std::vector<CollectionsLcdsSlotEntry> slotEntries;
    bool current; 
  };
  inline void to_json(json& j, const CollectionsLcdsSpellBookPageDTO& v) {
    j["name"] = v.name; 
    j["pageId"] = v.pageId; 
    j["summonerId"] = v.summonerId; 
    j["createDate"] = v.createDate; 
    j["slotEntries"] = v.slotEntries; 
    j["current"] = v.current; 
  }
  inline void from_json(const json& j, CollectionsLcdsSpellBookPageDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.pageId = j.at("pageId").get<uint32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.createDate = j.at("createDate").get<uint64_t>(); 
    v.slotEntries = j.at("slotEntries").get<std::vector<CollectionsLcdsSlotEntry>>(); 
    v.current = j.at("current").get<bool>(); 
  }
}