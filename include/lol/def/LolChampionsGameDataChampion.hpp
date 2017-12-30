#pragma once
#include "../base_def.hpp" 
#include "LolChampionsGameDataChampionSpell.hpp"
#include "LolChampionsGameDataChampionSkin.hpp"
namespace lol {
  struct LolChampionsGameDataChampion { 
    std::string name;
    int32_t id;
    std::string stingerSfxPath;
    std::string squarePortraitPath;
    std::string chooseVoPath;
    std::vector<LolChampionsGameDataChampionSkin> skins;
    std::string alias;
    std::string banVoPath;
    LolChampionsGameDataChampionSpell passive;
    std::vector<std::string> roles;
    std::vector<LolChampionsGameDataChampionSpell> spells; 
  };
  inline void to_json(json& j, const LolChampionsGameDataChampion& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["stingerSfxPath"] = v.stingerSfxPath; 
    j["squarePortraitPath"] = v.squarePortraitPath; 
    j["chooseVoPath"] = v.chooseVoPath; 
    j["skins"] = v.skins; 
    j["alias"] = v.alias; 
    j["banVoPath"] = v.banVoPath; 
    j["passive"] = v.passive; 
    j["roles"] = v.roles; 
    j["spells"] = v.spells; 
  }
  inline void from_json(const json& j, LolChampionsGameDataChampion& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>(); 
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>(); 
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>(); 
    v.skins = j.at("skins").get<std::vector<LolChampionsGameDataChampionSkin>>(); 
    v.alias = j.at("alias").get<std::string>(); 
    v.banVoPath = j.at("banVoPath").get<std::string>(); 
    v.passive = j.at("passive").get<LolChampionsGameDataChampionSpell>(); 
    v.roles = j.at("roles").get<std::vector<std::string>>(); 
    v.spells = j.at("spells").get<std::vector<LolChampionsGameDataChampionSpell>>(); 
  }
}