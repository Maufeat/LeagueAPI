#pragma once
#include "../base_def.hpp" 
#include "LolItemSetsItemSetBlock.hpp"
#include "LolItemSetsPreferredItemSlot.hpp"
namespace lol {
  struct LolItemSetsItemSet { 
    std::string uid;
    std::string title;
    std::string mode;
    std::string map;
    std::string type;
    int32_t sortrank;
    std::string startedFrom;
    std::vector<int32_t> associatedChampions;
    std::vector<int32_t> associatedMaps;
    std::vector<LolItemSetsItemSetBlock> blocks;
    std::vector<LolItemSetsPreferredItemSlot> preferredItemSlots; 
  };
  inline void to_json(json& j, const LolItemSetsItemSet& v) {
    j["uid"] = v.uid; 
    j["title"] = v.title; 
    j["mode"] = v.mode; 
    j["map"] = v.map; 
    j["type"] = v.type; 
    j["sortrank"] = v.sortrank; 
    j["startedFrom"] = v.startedFrom; 
    j["associatedChampions"] = v.associatedChampions; 
    j["associatedMaps"] = v.associatedMaps; 
    j["blocks"] = v.blocks; 
    j["preferredItemSlots"] = v.preferredItemSlots; 
  }
  inline void from_json(const json& j, LolItemSetsItemSet& v) {
    v.uid = j.at("uid").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.mode = j.at("mode").get<std::string>(); 
    v.map = j.at("map").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.sortrank = j.at("sortrank").get<int32_t>(); 
    v.startedFrom = j.at("startedFrom").get<std::string>(); 
    v.associatedChampions = j.at("associatedChampions").get<std::vector<int32_t>>(); 
    v.associatedMaps = j.at("associatedMaps").get<std::vector<int32_t>>(); 
    v.blocks = j.at("blocks").get<std::vector<LolItemSetsItemSetBlock>>(); 
    v.preferredItemSlots = j.at("preferredItemSlots").get<std::vector<LolItemSetsPreferredItemSlot>>(); 
  }
}