#pragma once
#include "../base_def.hpp" 
#include "LolItemSetsItemSetBlock.hpp"
#include "LolItemSetsPreferredItemSlot.hpp"
namespace lol {
  struct LolItemSetsItemSet { 
    std::string map;
    std::vector<LolItemSetsPreferredItemSlot> preferredItemSlots;
    std::string startedFrom;
    int32_t sortrank;
    std::string uid;
    std::vector<LolItemSetsItemSetBlock> blocks;
    std::string title;
    std::vector<int32_t> associatedChampions;
    std::string mode;
    std::string type;
    std::vector<int32_t> associatedMaps; 
  };
  inline void to_json(json& j, const LolItemSetsItemSet& v) {
    j["map"] = v.map; 
    j["preferredItemSlots"] = v.preferredItemSlots; 
    j["startedFrom"] = v.startedFrom; 
    j["sortrank"] = v.sortrank; 
    j["uid"] = v.uid; 
    j["blocks"] = v.blocks; 
    j["title"] = v.title; 
    j["associatedChampions"] = v.associatedChampions; 
    j["mode"] = v.mode; 
    j["type"] = v.type; 
    j["associatedMaps"] = v.associatedMaps; 
  }
  inline void from_json(const json& j, LolItemSetsItemSet& v) {
    v.map = j.at("map").get<std::string>(); 
    v.preferredItemSlots = j.at("preferredItemSlots").get<std::vector<LolItemSetsPreferredItemSlot>>(); 
    v.startedFrom = j.at("startedFrom").get<std::string>(); 
    v.sortrank = j.at("sortrank").get<int32_t>(); 
    v.uid = j.at("uid").get<std::string>(); 
    v.blocks = j.at("blocks").get<std::vector<LolItemSetsItemSetBlock>>(); 
    v.title = j.at("title").get<std::string>(); 
    v.associatedChampions = j.at("associatedChampions").get<std::vector<int32_t>>(); 
    v.mode = j.at("mode").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.associatedMaps = j.at("associatedMaps").get<std::vector<int32_t>>(); 
  }
}