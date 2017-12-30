#pragma once
#include "../base_def.hpp" 
#include "LolItemSetsItemSetBlock.hpp"
#include "LolItemSetsPreferredItemSlot.hpp"
namespace lol {
  struct LolItemSetsItemSet { 
    std::vector<int32_t> associatedChampions;
    std::vector<LolItemSetsPreferredItemSlot> preferredItemSlots;
    std::vector<LolItemSetsItemSetBlock> blocks;
    std::string startedFrom;
    std::string mode;
    std::string uid;
    std::string type;
    std::string map;
    std::string title;
    int32_t sortrank;
    std::vector<int32_t> associatedMaps; 
  };
  inline void to_json(json& j, const LolItemSetsItemSet& v) {
    j["associatedChampions"] = v.associatedChampions; 
    j["preferredItemSlots"] = v.preferredItemSlots; 
    j["blocks"] = v.blocks; 
    j["startedFrom"] = v.startedFrom; 
    j["mode"] = v.mode; 
    j["uid"] = v.uid; 
    j["type"] = v.type; 
    j["map"] = v.map; 
    j["title"] = v.title; 
    j["sortrank"] = v.sortrank; 
    j["associatedMaps"] = v.associatedMaps; 
  }
  inline void from_json(const json& j, LolItemSetsItemSet& v) {
    v.associatedChampions = j.at("associatedChampions").get<std::vector<int32_t>>(); 
    v.preferredItemSlots = j.at("preferredItemSlots").get<std::vector<LolItemSetsPreferredItemSlot>>(); 
    v.blocks = j.at("blocks").get<std::vector<LolItemSetsItemSetBlock>>(); 
    v.startedFrom = j.at("startedFrom").get<std::string>(); 
    v.mode = j.at("mode").get<std::string>(); 
    v.uid = j.at("uid").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.map = j.at("map").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.sortrank = j.at("sortrank").get<int32_t>(); 
    v.associatedMaps = j.at("associatedMaps").get<std::vector<int32_t>>(); 
  }
}