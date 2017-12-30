#pragma once
#include "../base_def.hpp" 
#include "LolChampionsCollectionsOwnership.hpp"
namespace lol {
  struct LolChampionsCollectionsChampionMinimal { 
    std::string name;
    int32_t id;
    std::vector<std::string> disabledQueues;
    std::string chooseVoPath;
    uint64_t purchased;
    bool rankedPlayEnabled;
    std::vector<std::string> roles;
    bool freeToPlay;
    std::string squarePortraitPath;
    std::string stingerSfxPath;
    bool active;
    bool botEnabled;
    std::string alias;
    std::string banVoPath;
    LolChampionsCollectionsOwnership ownership; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsChampionMinimal& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["disabledQueues"] = v.disabledQueues; 
    j["chooseVoPath"] = v.chooseVoPath; 
    j["purchased"] = v.purchased; 
    j["rankedPlayEnabled"] = v.rankedPlayEnabled; 
    j["roles"] = v.roles; 
    j["freeToPlay"] = v.freeToPlay; 
    j["squarePortraitPath"] = v.squarePortraitPath; 
    j["stingerSfxPath"] = v.stingerSfxPath; 
    j["active"] = v.active; 
    j["botEnabled"] = v.botEnabled; 
    j["alias"] = v.alias; 
    j["banVoPath"] = v.banVoPath; 
    j["ownership"] = v.ownership; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsChampionMinimal& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>(); 
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>(); 
    v.purchased = j.at("purchased").get<uint64_t>(); 
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>(); 
    v.roles = j.at("roles").get<std::vector<std::string>>(); 
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>(); 
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>(); 
    v.active = j.at("active").get<bool>(); 
    v.botEnabled = j.at("botEnabled").get<bool>(); 
    v.alias = j.at("alias").get<std::string>(); 
    v.banVoPath = j.at("banVoPath").get<std::string>(); 
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>(); 
  }
}