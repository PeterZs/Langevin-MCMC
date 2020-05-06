#include <math.h>
void evaluate_path_bidir_2_1_static(const float lens[2], const float primary[5], const float scene[38], const float vertParams[238], float logLumValue[1]) {
	float _t1017, _t1013, _t1012, _t1011, _t1010, _t1006, _t1005, _t1004, _t1003, _t1002, _t1001, _t1000, _t999, _t998, _t997, _t994, _t993, _t990, _t989, _t988, _t639, _t638, _t987, _t985, _t984, _t976, _t975, _t973, _t981, _t980, _t979, _t978, _t904, _t903, _t902, _t971, _t967, _t956, _t955, _t950, _t949, _t948, _t943, _t942, _t941, _t937, _t936, _t934, _t933, _t932, _t926, _t961, _t925, _t923, _t920, _t922, _t917, _t915, _t914, _t911, _t913, _t910, _t908, _t907, _t901, _t893, _t890, _t889, _t888, _t963, _t887, _t885, _t883, _t878, _t877, _t876, _t906, _t875, _t905, _t874, _t873, _t869, _t900, _t868, _t860, _t859, _t844, _t858, _t857, _t855, _t854, _t853, _t851, _t850, _t843, _t842, _t839, _t841, _t837, _t939, _t822, _t826, _t983, _t836, _t835, _t834, _t833, _t832, _t830, _t829, _t828, _t940, _t821, _t817, _t816, _t809, _t1015, _t807, _t806, _t805, _t801, _t800, _t799, _t798, _t797, _t421, _t420, _t164, _t660, _t405, _t404, _t612, _t401, _t106, _t367, _t609, _t400, _t896, _t334, _t397, _t396, _t487, _t384, _t59, _t899, _t191, _t773, _t630, _t356, _t507, _t354, _t352, _t957, _t472, _t974, _t740, _t350, _t255, _t348, _t253, _t347, _t346, _t645, _t341, _t340, _t339, _t338, _t46, _t337, _t227, _t895, _t333, _t332, _t17, _t150, _t327, _t243, _t326, _t242, _t241, _t43, _t820, _t318, _t317, _t986, _t45, _t407, _t315, _t311, _t310, _t309, _t803, _t604, _t38, _t882, _t373, _t292, _t182, _t872, _t124, _t498, _t436, _t483, _t282, _t291, _t148, _t871, _t123, _t28, _t289, _t147, _t870, _t122, _t793, _t288, _t852, _t140, _t329, _t284, _t163, _t266, _t770, _t330, _t281, _t267, _t280, _t938, _t390, _t279, _t385, _t736, _t697, _t964, _t265, _t204, _t260, _t403, _t953, _t918, _t259, _t192, _t251, _t688, _t295, _t294, _t919, _t245, _t402, _t916, _t244, _t323, _t235, _t431, _t353, _t640, _t161, _t234, _t328, _t233, _t360, _t228, _t416, _t819, _t225, _t863, _t224, _t375, _t769, _t221, _t219, _t505, _t408, _t213, _t209, _t325, _t238, _t454, _t94, _t765, _t4, _t862, _t71, _t764, _t134, _t569, _t52, _t229, _t141, _t80, _t824, _t548, _t177, _t100, _t87, _t433, _t127, _t388, _t952, _t467, _t69, _t946, _t272, _t68, _t945, _t271, _t65, _t452, _t184, _t406, _t6, _t313, _t62, _t93, _t7, _t756, _t73, _t344, _t582, _t72, _t18, _t66, _t41, _t434, _t129, _t56, _t258, _t49, _t97, _t215, _t195, _t762, _t174, _t297, _t351, _t51, _t550, _t50, _t101, _t254, _t670, _t78, _t102, _t144, _t542, _t614, _t20, _t98, _t19, _t185, _t220, _t149, _t40, _t776, _t1009, _t777, _t76, _t393, _t180, _t791, _t159, _t299, _t23, _t481, _t496, _t306, _t198, _t230, _t143, _t312, _t929, _t34, _t897, _t335, _t456, _t61, _t9, _t37, _t879, _t861, _t475, _t74, _t725, _t564, _t788, _t152, _t286, _t33, _t298, _t158, _t165, _t131, _t117, _t529, _t314, _t154, _t8, _t554, _t774, _t247, _t526, _t15, _t166, _t371, _t847, _t530, _t321, _t85, _t395, _t470, _t139, _t116, _t909, _t336, _t856, _t25, _t22, _t728, _t682, _t349, _t5, _t995, _t91, _t1, _t573, _t200, _t497, _t482, _t308, _t86, _t130, _t320, _t287, _t77, _t443, _t250, _t368, _t10, _t32, _t142, _t90, _t82, _t583, _t11, _t359, _t722, _t273, _t654, _t183, _t316, _t992, _t153, _t125, _t586, _t319, _t197, _t374, _t293, _t63, _t437, _t484, _t678, _t83, _t89, _t584, _t676, _t399, _t724, _t766, _t108, _t168, _t96, _t392, _t572, _t290, _t398, _t607, _t201, _t107, _t616, _t376, _t222, _t30, _t477, _t881, _t383, _t732, _t930, _t84, _t42, _t188, _t176, _t99, _t67, _t126, _t954, _t466, _t357, _t508, _t710, _t237, _t322, _t1014, _t541, _t264, _t3, _t698, _t263, _t378, _t737, _t386, _t103, _t606, _t81, _t825, _t644, _t704, _t12, _t412, _t462, _t551, _t575, _t206, _t112, _t935, _t566, _t118, _t389, _t120, _t53, _t109, _t27, _t565, _t730, _t342, _t133, _t151, _t285, _t248, _t343, _t661, _t55, _t114, _t848, _t232, _t119, _t480, _t494, _t305, _t196, _t175, _t128, _t70, _t88, _t135, _t217, _t570, _t831, _t137, _t136, _t218, _t571, _t138, _t808, _t205, _t214, _t132, _t345, _t417, _t155, _t216, _t0, _t418, _t181, _t104, _t365, _t105, _t366, _t419, _t597, _t256, _t552, _t167, _t169, _t372, _t531, _t532, _t492, _t302, _t515, _t172, _t173, _t178, _t79, _t684, _t179, _t186, _t14, _t187, _t391, _t95, _t951, _t189, _t246, _t190, _t113, _t35, _t944, _t270, _t249, _t16, _t193, _t422, _t423, _t424, _t593, _t432, _t435, _t278, _t262, _t425, _t588, _t962, _t886, _t426, _t589, _t427, _t590, _t428, _t591, _t972, _t429, _t592, _t635, _t441, _t720, _t444, _t445, _t712, _t446, _t447, _t713, _t752, _t448, _t928, _t2, _t29, _t714, _t753, _t57, _t449, _t58, _t450, _t451, _t455, _t296, _t460, _t21, _t459, _t413, _t668, _t411, _t461, _t574, _t415, _t463, _t577, _t464, _t414, _t465, _t576, _t468, _t469, _t719, _t958, _t473, _t959, _t474, _t476, _t495, _t304, _t478, _t307, _t493, _t479, _t64, _t438, _t485, _t379, _t699, _t387, _t738, _t439, _t486, _t380, _t702, _t488, _t489, _t490, _t491, _t121, _t499, _t500, _t170, _t501, _t171, _t502, _t503, _t504, _t506, _t60, _t509, _t787, _t510, _t511, _t236, _t324, _t512, _t513, _t514, _t210, _t516, _t706, _t763, _t355, _t518, _t784, _t880, _t867, _t75, _t708, _t361, _t362, _t363, _t364, _t369, _t812, _t370, _t520, _t522, _t524, _t36, _t596, _t13, _t525, _t815, _t257, _t598, _t533, _t1007, _t534, _t735, _t683, _t846, _t528, _t538, _t546, _t540, _t92, _t585, _t543, _t1008, _t982, _t535, _t239, _t544, _t240, _t545, _t547, _t549, _t553, _t115, _t555, _t556, _t557, _t558, _t559, _t44, _t560, _t561, _t562, _t563, _t567, _t568, _t578, _t693, _t394, _t579, _t620, _t519, _t580, _t621, _t581, _t622, _t587, _t838, _t594, _t595, _t599, _t600, _t636, _t610, _t537, _t601, _t637, _t26, _t539, _t602, _t802, _t603, _t804, _t605, _t631, _t613, _t814, _t615, _t617, _t618, _t619, _t623, _t211, _t517, _t671, _t778, _t965, _t624, _t212, _t672, _t48, _t779, _t966, _t625, _t673, _t780, _t968, _t626, _t674, _t781, _t969, _t627, _t690, _t628, _t358, _t300, _t160, _t789, _t629, _t156, _t632, _t223, _t633, _t226, _t634, _t743, _t891, _t268, _t700, _t892, _t146, _t269, _t701, _t47, _t471, _t782, _t162, _t331, _t650, _t864, _t651, _t811, _t696, _t865, _t453, _t652, _t646, _t750, _t647, _t648, _t924, _t283, _t31, _t662, _t1016, _t663, _t664, _t665, _t898, _t409, _t457, _t666, _t410, _t458, _t667, _t252, _t194, _t669, _t677, _t729, _t679, _t727, _t680, _t655, _t656, _t657, _t658, _t894, _t691, _t692, _t39, _t694, _t199, _t523, _t695, _t685, _t686, _t687, _t24, _t442, _t703, _t749, _t521, _t705, _t707, _t866, _t54, _t653, _t884, _t716, _t931, _t717, _t991, _t757, _t718, _t721, _t274, _t723, _t681, _t726, _t731, _t381, _t733, _t382, _t734, _t790, _t741, _t742, _t744, _t754, _t208, _t755, _t758, _t207, _t759, _t202, _t760, _t795, _t203, _t761, _t110, _t745, _t303, _t111, _t746, _t747, _t748, _t767, _t768, _t771, _t772, _t775, _t783, _t145, _t786, _t796;
	_t0 = scene[8] * 0.500000;
	_t1 = scene[4] * 0.500000;
	_t2 = _t1+_t0;
	_t3 = _t2+scene[16];
	_t4 = scene[7] * 0.500000;
	_t5 = scene[3] * 0.500000;
	_t6 = _t5+_t4;
	_t7 = _t6+scene[15];
	_t8 = scene[6] * 0.500000;
	_t9 = scene[2] * 0.500000;
	_t10 = _t9+_t8;
	_t11 = _t10+scene[14];
	_t12 = scene[5] * 0.500000;
	_t13 = scene[1] * 0.500000;
	_t14 = _t13+_t12;
	_t15 = _t14+scene[13];
	_t16 = (float)1.0 / (_t3);
	_t17 = _t7 * _t16;
	_t18 = _t11 * _t16;
	_t19 = _t15 * _t16;
	_t20 = sqrt(_t19*_t19+_t18*_t18+_t17*_t17);
	_t21 = (float)1.0 / (_t20);
	_t22 = _t19 * _t21;
	_t23 = _t18 * _t21;
	_t24 = _t17 * _t21;
	_t25 = scene[24] * scene[24];
	_t26 = scene[25] * scene[25];
	_t27 = scene[26] * scene[26];
	_t28 = scene[24] * scene[25];
	_t29 = scene[24] * scene[26];
	_t30 = scene[25] * scene[26];
	_t31 = scene[24] * scene[27];
	_t32 = scene[25] * scene[27];
	_t33 = scene[26] * scene[27];
	_t34 = _t26+_t27;
	_t35 = 2.000000 * _t34;
	_t36 = 1.000000-_t35;
	_t37 = _t28+_t33;
	_t38 = 2.000000 * _t37;
	_t39 = _t29-_t32;
	_t40 = 2.000000 * _t39;
	_t41 = _t28-_t33;
	_t42 = 2.000000 * _t41;
	_t43 = _t25+_t27;
	_t44 = 2.000000 * _t43;
	_t45 = 1.000000-_t44;
	_t46 = _t30+_t31;
	_t47 = 2.000000 * _t46;
	_t48 = _t29+_t32;
	_t49 = 2.000000 * _t48;
	_t50 = _t30-_t31;
	_t51 = 2.000000 * _t50;
	_t52 = _t25+_t26;
	_t53 = 2.000000 * _t52;
	_t54 = 1.000000-_t53;
	_t55 = _t54 * _t24;
	_t56 = _t47 * _t23;
	_t57 = _t40 * _t22;
	_t58 = _t57+_t56;
	_t59 = _t58+_t55;
	_t60 = _t51 * _t24;
	_t61 = _t45 * _t23;
	_t62 = _t38 * _t22;
	_t63 = _t62+_t61;
	_t64 = _t63+_t60;
	_t65 = _t49 * _t24;
	_t66 = _t42 * _t23;
	_t67 = _t36 * _t22;
	_t68 = _t67+_t66;
	_t69 = _t68+_t65;
	_t70 = scene[8] * primary[2];
	_t71 = scene[4] * primary[1];
	_t72 = _t71+_t70;
	_t73 = _t72+scene[16];
	_t74 = scene[7] * primary[2];
	_t75 = scene[3] * primary[1];
	_t76 = _t75+_t74;
	_t77 = _t76+scene[15];
	_t78 = scene[6] * primary[2];
	_t79 = scene[2] * primary[1];
	_t80 = _t79+_t78;
	_t81 = _t80+scene[14];
	_t82 = scene[5] * primary[2];
	_t83 = scene[1] * primary[1];
	_t84 = _t83+_t82;
	_t85 = _t84+scene[13];
	_t86 = (float)1.0 / (_t73);
	_t87 = _t77 * _t86;
	_t88 = _t81 * _t86;
	_t89 = _t85 * _t86;
	_t90 = sqrt(_t89*_t89+_t88*_t88+_t87*_t87);
	_t91 = (float)1.0 / (_t90);
	_t92 = _t89 * _t91;
	_t93 = _t88 * _t91;
	_t94 = _t87 * _t91;
	_t95 = scene[24] * scene[24];
	_t96 = scene[25] * scene[25];
	_t97 = scene[26] * scene[26];
	_t98 = scene[24] * scene[25];
	_t99 = scene[24] * scene[26];
	_t100 = scene[25] * scene[26];
	_t101 = scene[24] * scene[27];
	_t102 = scene[25] * scene[27];
	_t103 = scene[26] * scene[27];
	_t104 = _t96+_t97;
	_t105 = 2.000000 * _t104;
	_t106 = 1.000000-_t105;
	_t107 = _t98+_t103;
	_t108 = 2.000000 * _t107;
	_t109 = _t99-_t102;
	_t110 = 2.000000 * _t109;
	_t111 = _t98-_t103;
	_t112 = 2.000000 * _t111;
	_t113 = _t95+_t97;
	_t114 = 2.000000 * _t113;
	_t115 = 1.000000-_t114;
	_t116 = _t100+_t101;
	_t117 = 2.000000 * _t116;
	_t118 = _t99+_t102;
	_t119 = 2.000000 * _t118;
	_t120 = _t100-_t101;
	_t121 = 2.000000 * _t120;
	_t122 = _t95+_t96;
	_t123 = 2.000000 * _t122;
	_t124 = 1.000000-_t123;
	_t125 = _t124 * _t94;
	_t126 = _t117 * _t93;
	_t127 = _t110 * _t92;
	_t128 = _t127+_t126;
	_t129 = _t128+_t125;
	_t130 = _t121 * _t94;
	_t131 = _t115 * _t93;
	_t132 = _t108 * _t92;
	_t133 = _t132+_t131;
	_t134 = _t133+_t130;
	_t135 = _t119 * _t94;
	_t136 = _t112 * _t93;
	_t137 = _t106 * _t92;
	_t138 = _t137+_t136;
	_t139 = _t138+_t135;
	_t140 = _t69 * _t139 + _t64 * _t134 + _t59 * _t129;
	_t141 = scene[33] / _t140;
	_t142 = _t141 * _t141;
	_t143 = _t142 / _t140;
	_t144 = scene[32] / _t143;
	_t145 = _t144 * _t144;
	if (vertParams[3] == 0.000000) {
		_t158 = vertParams[9] * vertParams[11];
		_t159 = vertParams[8] * vertParams[12];
		_t160 = _t159-_t158;
		_t161 = vertParams[8] * vertParams[13];
		_t162 = vertParams[10] * vertParams[11];
		_t163 = _t162-_t161;
		_t164 = vertParams[10] * vertParams[12];
		_t165 = vertParams[9] * vertParams[13];
		_t166 = _t165-_t164;
		_t167 = sqrt(_t166*_t166+_t163*_t163+_t160*_t160);
		_t168 = (float)1.0 / (_t167);
		_t169 = _t166 * _t168;
		_t170 = _t163 * _t168;
		_t171 = _t160 * _t168;
		_t172 = _t134 * vertParams[11];
		_t173 = _t139 * vertParams[12];
		_t174 = _t173-_t172;
		_t175 = _t139 * vertParams[13];
		_t176 = _t129 * vertParams[11];
		_t177 = _t176-_t175;
		_t178 = _t129 * vertParams[12];
		_t179 = _t134 * vertParams[13];
		_t180 = _t179-_t178;
		_t181 = _t180 * vertParams[8] + _t177 * vertParams[9] + _t174 * vertParams[10];
		_t182 = (float)1.0 / (_t181);
		_t183 = scene[18]-vertParams[5];
		_t184 = scene[19]-vertParams[6];
		_t185 = scene[20]-vertParams[7];
		_t186 = _t183 * _t180 + _t184 * _t177 + _t185 * _t174;
		_t187 = _t186 * _t182;
		_t188 = _t184 * vertParams[8];
		_t189 = _t183 * vertParams[9];
		_t190 = _t189-_t188;
		_t191 = _t183 * vertParams[10];
		_t192 = _t185 * vertParams[8];
		_t193 = _t192-_t191;
		_t194 = _t185 * vertParams[9];
		_t195 = _t184 * vertParams[10];
		_t196 = _t195-_t194;
		_t197 = _t139 * _t196 + _t134 * _t193 + _t129 * _t190;
		_t198 = _t197 * _t182;
		_t199 = vertParams[11] * _t196 + vertParams[12] * _t193 + vertParams[13] * _t190;
		_t200 = _t199 * _t182;
		_t201 = 1.000000-_t187;
		_t202 = _t201-_t198;
		_t203 = _t200 * _t139;
		_t204 = scene[18]+_t203;
		_t205 = _t200 * _t134;
		_t206 = scene[19]+_t205;
		_t207 = _t200 * _t129;
		_t208 = scene[20]+_t207;
		_t209 = _t198 * vertParams[20];
		_t210 = _t187 * vertParams[17];
		_t211 = _t202 * vertParams[14];
		_t212 = _t211+_t210;
		_t213 = _t212+_t209;
		_t214 = _t198 * vertParams[21];
		_t215 = _t187 * vertParams[18];
		_t216 = _t202 * vertParams[15];
		_t217 = _t216+_t215;
		_t218 = _t217+_t214;
		_t219 = _t198 * vertParams[22];
		_t220 = _t187 * vertParams[19];
		_t221 = _t202 * vertParams[16];
		_t222 = _t221+_t220;
		_t223 = _t222+_t219;
		_t224 = sqrt(_t213*_t213+_t218*_t218+_t223*_t223);
		_t225 = (float)1.0 / (_t224);
		_t226 = _t213 * _t225;
		_t227 = _t218 * _t225;
		_t228 = _t223 * _t225;
		if (vertParams[41] == 0.000000) {
			_t229 = _t187;
			_t230 = _t198;
		}
		else {
			_t232 = _t198 * vertParams[46];
			_t233 = _t187 * vertParams[44];
			_t234 = 1.000000-_t187;
			_t235 = _t234-_t198;
			_t236 = _t235 * vertParams[42];
			_t237 = _t236+_t233;
			_t238 = _t237+_t232;
			_t239 = _t198 * vertParams[47];
			_t240 = _t187 * vertParams[45];
			_t241 = 1.000000-_t187;
			_t242 = _t241-_t198;
			_t243 = _t242 * vertParams[43];
			_t244 = _t243+_t240;
			_t245 = _t244+_t239;
			_t229 = _t238;
			_t230 = _t245;
		}
		_t146 = _t204;
		_t147 = _t206;
		_t148 = _t208;
		_t149 = _t169;
		_t150 = _t170;
		_t151 = _t171;
		_t152 = _t226;
		_t153 = _t227;
		_t154 = _t228;
		_t155 = _t229;
		_t156 = _t230;
	}
	else {
		_t146 = 0.000000;
		_t147 = 0.000000;
		_t148 = 0.000000;
		_t149 = 0.000000;
		_t150 = 0.000000;
		_t151 = 0.000000;
		_t152 = 0.000000;
		_t153 = 0.000000;
		_t154 = 0.000000;
		_t155 = 0.000000;
		_t156 = 0.000000;
	}
	_t246 = -_t139;
	_t247 = -_t134;
	_t248 = -_t129;
	_t249 = scene[20]-_t148;
	_t250 = _t249 * _t249;
	_t251 = scene[19]-_t147;
	_t252 = _t251 * _t251;
	_t253 = scene[18]-_t146;
	_t254 = _t253 * _t253;
	_t255 = _t254+_t252;
	_t256 = _t255+_t250;
	_t257 = _t256 * _t256;
	_t258 = _t145 * _t257;
	_t259 = _t139 * _t152 + _t134 * _t153 + _t129 * _t154;
	if (_t259 >= 0.000000) {
		_t260 = _t259;
	}
	else {
		_t262 = -_t259;
		_t260 = _t262;
	}
	_t263 = _t260 * _t260;
	_t264 = (float)1.0 / (_t263);
	_t265 = _t258 * _t264;
	if (vertParams[49] == 0.000000) {
		_t278 = vertParams[50]-_t146;
		_t279 = vertParams[51]-_t147;
		_t280 = vertParams[52]-_t148;
		_t281 = _t280 * _t280;
		_t282 = _t279 * _t279;
		_t283 = _t278 * _t278;
		_t284 = _t283+_t282;
		_t285 = _t284+_t281;
		_t286 = sqrt(_t285);
		_t287 = _t278 / _t286;
		_t288 = _t279 / _t286;
		_t289 = _t280 / _t286;
		_t290 = (float)1.0 / (_t285);
		_t291 = vertParams[53] * _t290;
		_t292 = vertParams[54] * _t290;
		_t293 = vertParams[55] * _t290;
		_t266 = _t287;
		_t267 = _t288;
		_t268 = _t289;
		_t269 = _t291;
		_t270 = _t292;
		_t271 = _t293;
		_t272 = 1.000000;
		_t273 = _t285;
		_t274 = 0.079577;
	}
	else if (vertParams[49] == 1.000000) {
		if (vertParams[50] == 0.000000) {
			_t302 = 1.000001-primary[3];
			_t303 = sqrt(_t302);
			_t304 = 1.000000-_t303;
			_t305 = _t303 * primary[4];
			_t306 = vertParams[58] * _t305;
			_t307 = vertParams[55] * _t304;
			_t308 = vertParams[52]+_t307;
			_t309 = _t308+_t306;
			_t310 = vertParams[59] * _t305;
			_t311 = vertParams[56] * _t304;
			_t312 = vertParams[53]+_t311;
			_t313 = _t312+_t310;
			_t314 = vertParams[60] * _t305;
			_t315 = vertParams[57] * _t304;
			_t316 = vertParams[54]+_t315;
			_t317 = _t316+_t314;
			_t318 = 1.000000-_t304;
			_t319 = _t318-_t305;
			_t320 = vertParams[67] * _t305;
			_t321 = vertParams[64] * _t304;
			_t322 = vertParams[61] * _t319;
			_t323 = _t322+_t321;
			_t324 = _t323+_t320;
			_t325 = vertParams[68] * _t305;
			_t326 = vertParams[65] * _t304;
			_t327 = vertParams[62] * _t319;
			_t328 = _t327+_t326;
			_t329 = _t328+_t325;
			_t330 = vertParams[69] * _t305;
			_t331 = vertParams[66] * _t304;
			_t332 = vertParams[63] * _t319;
			_t333 = _t332+_t331;
			_t334 = _t333+_t330;
			_t335 = sqrt(_t324*_t324+_t329*_t329+_t334*_t334);
			_t336 = (float)1.0 / (_t335);
			_t337 = _t324 * _t336;
			_t338 = _t329 * _t336;
			_t339 = _t334 * _t336;
			_t294 = _t309;
			_t295 = _t313;
			_t296 = _t317;
			_t297 = _t337;
			_t298 = _t338;
			_t299 = _t339;
			_t300 = vertParams[95];
		}
		else {
			_t294 = 0.000000;
			_t295 = 0.000000;
			_t296 = 0.000000;
			_t297 = 0.000000;
			_t298 = 0.000000;
			_t299 = 0.000000;
			_t300 = 0.000000;
		}
		_t340 = _t294-_t146;
		_t341 = _t295-_t147;
		_t342 = _t296-_t148;
		_t343 = _t342 * _t342;
		_t344 = _t341 * _t341;
		_t345 = _t340 * _t340;
		_t346 = _t345+_t344;
		_t347 = _t346+_t343;
		_t348 = sqrt(_t347);
		_t349 = _t340 / _t348;
		_t350 = _t341 / _t348;
		_t351 = _t342 / _t348;
		_t352 = _t349 * _t297 + _t350 * _t298 + _t351 * _t299;
		_t353 = -_t352;
		_t354 = _t300 * _t347;
		_t355 = _t354 / _t353;
		_t356 = vertParams[96] / _t355;
		_t357 = vertParams[97] / _t355;
		_t358 = vertParams[98] / _t355;
		_t359 = _t300 * _t353;
		_t360 = _t359 * 0.318310;
		_t266 = _t349;
		_t267 = _t350;
		_t268 = _t351;
		_t269 = _t356;
		_t270 = _t357;
		_t271 = _t358;
		_t272 = _t353;
		_t273 = _t355;
		_t274 = _t360;
	}
	else if (vertParams[49] == 2.000000) {
		if (vertParams[50] == 0.000000) {
			_t378 = vertParams[57] * vertParams[57];
			_t379 = vertParams[58] * vertParams[58];
			_t380 = vertParams[59] * vertParams[59];
			_t381 = vertParams[57] * vertParams[58];
			_t382 = vertParams[57] * vertParams[59];
			_t383 = vertParams[58] * vertParams[59];
			_t384 = vertParams[57] * vertParams[60];
			_t385 = vertParams[58] * vertParams[60];
			_t386 = vertParams[59] * vertParams[60];
			_t387 = _t379+_t380;
			_t388 = 2.000000 * _t387;
			_t389 = 1.000000-_t388;
			_t390 = _t381+_t386;
			_t391 = 2.000000 * _t390;
			_t392 = _t382-_t385;
			_t393 = 2.000000 * _t392;
			_t394 = _t381-_t386;
			_t395 = 2.000000 * _t394;
			_t396 = _t378+_t380;
			_t397 = 2.000000 * _t396;
			_t398 = 1.000000-_t397;
			_t399 = _t383+_t384;
			_t400 = 2.000000 * _t399;
			_t401 = _t382+_t385;
			_t402 = 2.000000 * _t401;
			_t403 = _t383-_t384;
			_t404 = 2.000000 * _t403;
			_t405 = _t378+_t379;
			_t406 = 2.000000 * _t405;
			_t407 = 1.000000-_t406;
			_t361 = _t389;
			_t362 = _t391;
			_t363 = _t393;
			_t364 = 0.000000;
			_t365 = _t395;
			_t366 = _t398;
			_t367 = _t400;
			_t368 = 0.000000;
			_t369 = _t402;
			_t370 = _t404;
			_t371 = _t407;
			_t372 = 0.000000;
			_t373 = vertParams[51];
			_t374 = vertParams[52];
			_t375 = vertParams[53];
			_t376 = 1.000000;
		}
		else {
			_t408 = 1.000000-primary[0];
			_t409 = primary[0] * vertParams[54];
			_t410 = _t408 * vertParams[51];
			_t411 = _t410+_t409;
			_t412 = primary[0] * vertParams[55];
			_t413 = _t408 * vertParams[52];
			_t414 = _t413+_t412;
			_t415 = primary[0] * vertParams[56];
			_t416 = _t408 * vertParams[53];
			_t417 = _t416+_t415;
			_t418 = vertParams[60] * vertParams[64];
			_t419 = vertParams[59] * vertParams[63];
			_t420 = vertParams[58] * vertParams[62];
			_t421 = vertParams[57] * vertParams[61];
			_t422 = _t421+_t420;
			_t423 = _t422+_t419;
			_t424 = _t423+_t418;
			if (_t424 < 0.000000) {
				_t431 = -vertParams[61];
				_t432 = -vertParams[62];
				_t433 = -vertParams[63];
				_t434 = -vertParams[64];
				_t435 = -_t424;
				_t425 = _t431;
				_t426 = _t432;
				_t427 = _t433;
				_t428 = _t434;
				_t429 = _t435;
			}
			else {
				_t425 = vertParams[61];
				_t426 = vertParams[62];
				_t427 = vertParams[63];
				_t428 = vertParams[64];
				_t429 = _t424;
			}
			if (_t429 > 0.999500) {
				_t441 = 1.000000-primary[0];
				_t442 = primary[0] * _t425;
				_t443 = _t441 * vertParams[57];
				_t444 = _t443+_t442;
				_t445 = primary[0] * _t426;
				_t446 = _t441 * vertParams[58];
				_t447 = _t446+_t445;
				_t448 = primary[0] * _t427;
				_t449 = _t441 * vertParams[59];
				_t450 = _t449+_t448;
				_t451 = primary[0] * _t428;
				_t452 = _t441 * vertParams[60];
				_t453 = _t452+_t451;
				_t454 = sqrt(_t444*_t444+_t447*_t447+_t450*_t450+_t453*_t453);
				_t455 = (float)1.0 / (_t454);
				_t456 = _t444 * _t455;
				_t457 = _t447 * _t455;
				_t458 = _t450 * _t455;
				_t459 = _t453 * _t455;
				_t436 = _t456;
				_t437 = _t457;
				_t438 = _t458;
				_t439 = _t459;
			}
			else {
				_t460 = acos(_t429);
				_t461 = _t460 * primary[0];
				_t462 = vertParams[57] * _t429;
				_t463 = _t425-_t462;
				_t464 = vertParams[58] * _t429;
				_t465 = _t426-_t464;
				_t466 = vertParams[59] * _t429;
				_t467 = _t427-_t466;
				_t468 = vertParams[60] * _t429;
				_t469 = _t428-_t468;
				_t470 = sqrt(_t463*_t463+_t465*_t465+_t467*_t467+_t469*_t469);
				_t471 = (float)1.0 / (_t470);
				_t472 = _t463 * _t471;
				_t473 = _t465 * _t471;
				_t474 = _t467 * _t471;
				_t475 = _t469 * _t471;
				_t476 = sin(_t461);
				_t477 = cos(_t461);
				_t478 = _t472 * _t476;
				_t479 = vertParams[57] * _t477;
				_t480 = _t479+_t478;
				_t481 = _t473 * _t476;
				_t482 = vertParams[58] * _t477;
				_t483 = _t482+_t481;
				_t484 = _t474 * _t476;
				_t485 = vertParams[59] * _t477;
				_t486 = _t485+_t484;
				_t487 = _t475 * _t476;
				_t488 = vertParams[60] * _t477;
				_t489 = _t488+_t487;
				_t436 = _t480;
				_t437 = _t483;
				_t438 = _t486;
				_t439 = _t489;
			}
			_t490 = _t436 * _t436;
			_t491 = _t437 * _t437;
			_t492 = _t438 * _t438;
			_t493 = _t436 * _t437;
			_t494 = _t436 * _t438;
			_t495 = _t437 * _t438;
			_t496 = _t436 * _t439;
			_t497 = _t437 * _t439;
			_t498 = _t438 * _t439;
			_t499 = _t491+_t492;
			_t500 = 2.000000 * _t499;
			_t501 = 1.000000-_t500;
			_t502 = _t493+_t498;
			_t503 = 2.000000 * _t502;
			_t504 = _t494-_t497;
			_t505 = 2.000000 * _t504;
			_t506 = _t493-_t498;
			_t507 = 2.000000 * _t506;
			_t508 = _t490+_t492;
			_t509 = 2.000000 * _t508;
			_t510 = 1.000000-_t509;
			_t511 = _t495+_t496;
			_t512 = 2.000000 * _t511;
			_t513 = _t494+_t497;
			_t514 = 2.000000 * _t513;
			_t515 = _t495-_t496;
			_t516 = 2.000000 * _t515;
			_t517 = _t490+_t491;
			_t518 = 2.000000 * _t517;
			_t519 = 1.000000-_t518;
			_t361 = _t501;
			_t362 = _t503;
			_t363 = _t505;
			_t364 = 0.000000;
			_t365 = _t507;
			_t366 = _t510;
			_t367 = _t512;
			_t368 = 0.000000;
			_t369 = _t514;
			_t370 = _t516;
			_t371 = _t519;
			_t372 = 0.000000;
			_t373 = _t411;
			_t374 = _t414;
			_t375 = _t417;
			_t376 = 1.000000;
		}
		_t520 = vertParams[81]-vertParams[80];
		_t521 = primary[3]-vertParams[80];
		_t522 = _t521 / _t520;
		_t523 = vertParams[83]-vertParams[82];
		_t524 = primary[4]-vertParams[82];
		_t525 = _t524 / _t523;
		if (_t525 < 0.500000) {
			_t528 = 2.000000 * _t525;
			_t529 = sqrt(_t528);
			_t530 = 1.000000-_t529;
			_t526 = _t530;
		}
		else {
			_t531 = _t525-0.500000;
			_t532 = 2.000000 * _t531;
			_t533 = sqrt(_t532);
			_t534 = _t533-1.000000;
			_t526 = _t534;
		}
		if (_t522 < 0.500000) {
			_t537 = 2.000000 * _t522;
			_t538 = sqrt(_t537);
			_t539 = 1.000000-_t538;
			_t535 = _t539;
		}
		else {
			_t540 = _t522-0.500000;
			_t541 = 2.000000 * _t540;
			_t542 = sqrt(_t541);
			_t543 = _t542-1.000000;
			_t535 = _t543;
		}
		_t544 = vertParams[84]+_t535;
		_t545 = vertParams[85]+_t526;
		_t546 = _t544+0.500000;
		_t547 = _t546 * vertParams[86];
		_t548 = _t545+0.500000;
		_t549 = _t548 * vertParams[87];
		_t550 = sin(_t547);
		_t551 = cos(_t547);
		_t552 = sin(_t549);
		_t553 = cos(_t549);
		_t554 = -_t551;
		_t555 = _t554 * _t552;
		_t556 = _t550 * _t552;
		_t557 = _t371 * _t555;
		_t558 = _t367 * _t553;
		_t559 = _t363 * _t556;
		_t560 = _t559+_t558;
		_t561 = _t560+_t557;
		_t562 = _t370 * _t555;
		_t563 = _t366 * _t553;
		_t564 = _t362 * _t556;
		_t565 = _t564+_t563;
		_t566 = _t565+_t562;
		_t567 = _t369 * _t555;
		_t568 = _t365 * _t553;
		_t569 = _t361 * _t556;
		_t570 = _t569+_t568;
		_t571 = _t570+_t567;
		_t572 = 1.000000-_t535;
		_t573 = 1.000000-_t526;
		_t574 = vertParams[91] * _t535;
		_t575 = _t574 * _t573;
		_t576 = vertParams[88] * _t572;
		_t577 = _t576 * _t573;
		_t578 = _t577+_t575;
		_t579 = vertParams[92] * _t535;
		_t580 = _t579 * _t573;
		_t581 = vertParams[89] * _t572;
		_t582 = _t581 * _t573;
		_t583 = _t582+_t580;
		_t584 = vertParams[93] * _t535;
		_t585 = _t584 * _t573;
		_t586 = vertParams[90] * _t572;
		_t587 = _t586 * _t573;
		_t588 = _t587+_t585;
		_t589 = vertParams[97] * _t535;
		_t590 = _t589 * _t526;
		_t591 = vertParams[94] * _t572;
		_t592 = _t591 * _t526;
		_t593 = _t592+_t590;
		_t594 = vertParams[98] * _t535;
		_t595 = _t594 * _t526;
		_t596 = vertParams[95] * _t572;
		_t597 = _t596 * _t526;
		_t598 = _t597+_t595;
		_t599 = vertParams[99] * _t535;
		_t600 = _t599 * _t526;
		_t601 = vertParams[96] * _t572;
		_t602 = _t601 * _t526;
		_t603 = _t602+_t600;
		_t604 = _t578+_t593;
		_t605 = _t583+_t598;
		_t606 = _t588+_t603;
		if (_t552 >= 0.000000) {
			_t607 = _t552;
		}
		else {
			_t609 = -_t552;
			_t607 = _t609;
		}
		if (_t607 >= 0.000000) {
			_t610 = _t607;
		}
		else {
			_t610 = 0.000000;
		}
		_t612 = _t603 * 0.072169;
		_t613 = _t598 * 0.715160;
		_t614 = _t593 * 0.212671;
		_t615 = _t614+_t613;
		_t616 = _t615+_t612;
		_t617 = _t616 * vertParams[101];
		_t618 = _t588 * 0.072169;
		_t619 = _t583 * 0.715160;
		_t620 = _t578 * 0.212671;
		_t621 = _t620+_t619;
		_t622 = _t621+_t618;
		_t623 = _t622 * vertParams[100];
		_t624 = _t623+_t617;
		_t625 = _t624 * vertParams[102];
		_t626 = _t625 / _t610;
		_t627 = (float)1.0 / (_t626);
		_t628 = _t604 * _t627;
		_t629 = _t605 * _t627;
		_t630 = _t606 * _t627;
		_t631 = scene[37] * scene[37];
		_t632 = (float)1.0 / (_t631);
		_t633 = 0.318310 * _t632;
		_t634 = _t626 * _t633;
		_t266 = _t571;
		_t267 = _t566;
		_t268 = _t561;
		_t269 = _t628;
		_t270 = _t629;
		_t271 = _t630;
		_t272 = 1.000000;
		_t273 = _t626;
		_t274 = _t634;
	}
	else {
		_t266 = 0.000000;
		_t267 = 0.000000;
		_t268 = 0.000000;
		_t269 = 0.000000;
		_t270 = 0.000000;
		_t271 = 0.000000;
		_t272 = 0.000000;
		_t273 = 0.000000;
		_t274 = 0.000000;
	}
	if (vertParams[105] == 1.000000) {
		_t644 = _t152 * _t246 + _t153 * _t247 + _t154 * _t248;
		if (_t644 > 0.000000) {
			_t645 = _t152;
			_t646 = _t153;
			_t647 = _t154;
			_t648 = _t644;
		}
		else {
			_t650 = -_t152;
			_t651 = -_t153;
			_t652 = -_t154;
			_t653 = -_t644;
			_t645 = _t650;
			_t646 = _t651;
			_t647 = _t652;
			_t648 = _t653;
		}
		_t654 = _t645 * _t266 + _t646 * _t267 + _t647 * _t268;
		if (vertParams[113] > 0.000000) {
			_t660 = _t246 * _t645 + _t247 * _t646 + _t248 * _t647;
			_t661 = 2.000000 * _t660;
			_t662 = _t661 * _t645;
			_t663 = _t662-_t246;
			_t664 = _t661 * _t646;
			_t665 = _t664-_t247;
			_t666 = _t661 * _t647;
			_t667 = _t666-_t248;
			_t668 = _t663 * _t266 + _t665 * _t267 + _t667 * _t268;
			_t669 = pow(_t668,vertParams[112]);
			_t670 = _t669 * 0.159155;
			if (_t670 > 0.000000) {
				_t676 = vertParams[112]+1.000000;
				_t677 = vertParams[112]+2.000000;
				_t678 = _t677 * _t670;
				_t679 = vertParams[109] * _t678;
				_t680 = vertParams[110] * _t678;
				_t681 = vertParams[111] * _t678;
				_t682 = vertParams[113] * _t676;
				_t683 = _t682 * _t670;
				_t671 = _t679;
				_t672 = _t680;
				_t673 = _t681;
				_t674 = _t683;
			}
			else {
				_t671 = 0.000000;
				_t672 = 0.000000;
				_t673 = 0.000000;
				_t674 = 0.000000;
			}
			_t655 = _t671;
			_t656 = _t672;
			_t657 = _t673;
			_t658 = _t674;
		}
		else {
			_t655 = 0.000000;
			_t656 = 0.000000;
			_t657 = 0.000000;
			_t658 = 0.000000;
		}
		if (vertParams[113] < 1.000000) {
			_t690 = vertParams[106] * 0.318310;
			_t691 = vertParams[107] * 0.318310;
			_t692 = vertParams[108] * 0.318310;
			_t693 = 1.000000-vertParams[113];
			_t694 = _t693 * 0.318310;
			_t695 = _t694 * _t654;
			_t696 = _t694 * _t648;
			_t684 = _t690;
			_t685 = _t691;
			_t686 = _t692;
			_t687 = _t695;
			_t688 = _t696;
		}
		else {
			_t684 = 0.000000;
			_t685 = 0.000000;
			_t686 = 0.000000;
			_t687 = 0.000000;
			_t688 = 0.000000;
		}
		_t697 = _t655+_t684;
		_t698 = _t656+_t685;
		_t699 = _t657+_t686;
		_t700 = _t658+_t687;
		_t701 = _t658+_t688;
		_t702 = _t697 * _t654;
		_t703 = _t698 * _t654;
		_t704 = _t699 * _t654;
		_t635 = _t702;
		_t636 = _t703;
		_t637 = _t704;
		_t638 = _t654;
		_t639 = _t700;
		_t640 = _t701;
	}
	else if (vertParams[105] == 2.000000) {
		_t705 = _t246 * _t152 + _t247 * _t153 + _t248 * _t154;
		_t706 = _t266 * _t152 + _t267 * _t153 + _t268 * _t154;
		_t707 = _t705 * _t706;
		if (_t705 > 0.000000) {
			_t708 = vertParams[112];
		}
		else {
			_t708 = vertParams[113];
		}
		if (_t706 > 0.000000) {
			_t710 = vertParams[112];
		}
		else {
			_t710 = vertParams[113];
		}
		if (_t707 > 0.000000) {
			_t716 = _t246+_t266;
			_t717 = _t247+_t267;
			_t718 = _t248+_t268;
			_t719 = sqrt(_t716*_t716+_t717*_t717+_t718*_t718);
			_t720 = (float)1.0 / (_t719);
			_t721 = _t716 * _t720;
			_t722 = _t717 * _t720;
			_t723 = _t718 * _t720;
			_t712 = _t721;
			_t713 = _t722;
			_t714 = _t723;
		}
		else {
			_t724 = _t266 * _t708;
			_t725 = _t246+_t724;
			_t726 = _t267 * _t708;
			_t727 = _t247+_t726;
			_t728 = _t268 * _t708;
			_t729 = _t248+_t728;
			_t730 = sqrt(_t725*_t725+_t727*_t727+_t729*_t729);
			_t731 = (float)1.0 / (_t730);
			_t732 = _t725 * _t731;
			_t733 = _t727 * _t731;
			_t734 = _t729 * _t731;
			_t712 = _t732;
			_t713 = _t733;
			_t714 = _t734;
		}
		_t735 = _t712 * _t152 + _t713 * _t153 + _t714 * _t154;
		if (_t735 < 0.000000) {
			_t740 = -_t712;
			_t741 = -_t713;
			_t742 = -_t714;
			_t736 = _t740;
			_t737 = _t741;
			_t738 = _t742;
		}
		else {
			_t736 = _t712;
			_t737 = _t713;
			_t738 = _t714;
		}
		_t743 = _t246 * _t736 + _t247 * _t737 + _t248 * _t738;
		_t744 = _t266 * _t736 + _t267 * _t737 + _t268 * _t738;
		if (_t154 < -0.999999) {
			_t745 = 0.000000;
			_t746 = -1.000000;
			_t747 = 0.000000;
			_t748 = -1.000000;
			_t749 = 0.000000;
			_t750 = 0.000000;
		}
		else {
			_t752 = 1.000000+_t154;
			_t753 = (float)1.0 / (_t752);
			_t754 = -_t152;
			_t755 = _t754 * _t153;
			_t756 = _t755 * _t753;
			_t757 = -_t152;
			_t758 = _t152 * _t152;
			_t759 = _t758 * _t753;
			_t760 = 1.000000-_t759;
			_t761 = -_t153;
			_t762 = _t153 * _t153;
			_t763 = _t762 * _t753;
			_t764 = 1.000000-_t763;
			_t745 = _t760;
			_t746 = _t756;
			_t747 = _t757;
			_t748 = _t756;
			_t749 = _t764;
			_t750 = _t761;
		}
		_t765 = _t152 * _t736 + _t153 * _t737 + _t154 * _t738;
		_t766 = _t748 * _t736 + _t749 * _t737 + _t750 * _t738;
		_t767 = _t745 * _t736 + _t746 * _t737 + _t747 * _t738;
		_t768 = _t765 * _t765;
		_t769 = vertParams[114] * vertParams[114];
		_t770 = _t766 * _t766;
		_t771 = _t770 / _t769;
		_t772 = vertParams[114] * vertParams[114];
		_t773 = _t767 * _t767;
		_t774 = _t773 / _t772;
		_t775 = _t774+_t771;
		_t776 = _t775 / _t768;
		_t777 = _t768 * _t768;
		_t778 = 3.141593 * vertParams[114];
		_t779 = _t778 * vertParams[114];
		_t780 = _t779 * _t777;
		_t781 = -_t776;
		_t782 = exp(_t781);
		_t783 = _t782 / _t780;
		if (_t743 > 0.000000) {
			_t784 = vertParams[113];
		}
		else {
			_t784 = vertParams[112];
		}
		_t786 = _t784 * _t784;
		_t787 = _t743 * _t743;
		_t788 = 1.000000-_t787;
		_t789 = _t788 * _t786;
		_t790 = 1.000000-_t789;
		if (_t790 <= 0.000000) {
			_t791 = 1.000000;
		}
		else {
			if (_t743 >= 0.000000) {
				_t793 = _t743;
			}
			else {
				_t795 = -_t743;
				_t793 = _t795;
			}
			_t796 = sqrt(_t790);
			_t797 = vertParams[112] * _t796;
			_t798 = vertParams[112] * _t793;
			_t799 = _t793+_t797;
			_t800 = _t793-_t797;
			_t801 = _t800 / _t799;
			_t802 = _t798+_t796;
			_t803 = _t798-_t796;
			_t804 = _t803 / _t802;
			_t805 = _t804 * _t804;
			_t806 = _t801 * _t801;
			_t807 = _t806+_t805;
			_t808 = 0.500000 * _t807;
			_t791 = _t808;
		}
		if (_t705 >= 0.000000) {
			_t809 = _t705;
		}
		else {
			_t811 = -_t705;
			_t809 = _t811;
		}
		if (_t706 >= 0.000000) {
			_t812 = _t706;
		}
		else {
			_t814 = -_t706;
			_t812 = _t814;
		}
		_t815 = _t812 * _t812;
		_t816 = 1.000001-_t815;
		if (_t816 >= 0.000000) {
			_t817 = _t816;
		}
		else {
			_t819 = -_t816;
			_t817 = _t819;
		}
		_t820 = sqrt(_t817);
		_t821 = _t820 / _t812;
		if (_t821 <= 0.000000) {
			_t822 = 1.000000;
		}
		else {
			_t824 = vertParams[114] * _t821;
			_t825 = (float)1.0 / (_t824);
			if (_t825 >= 1.600000) {
				_t826 = 1.000000;
			}
			else {
				_t828 = _t825 * _t825;
				_t829 = 2.577000 * _t828;
				_t830 = 2.276000 * _t825;
				_t831 = 1.000000+_t830;
				_t832 = _t831+_t829;
				_t833 = 2.181000 * _t828;
				_t834 = 3.535000 * _t825;
				_t835 = _t834+_t833;
				_t836 = _t835 / _t832;
				_t826 = _t836;
			}
			_t822 = _t826;
		}
		_t837 = _t809 * _t809;
		_t838 = 1.000001-_t837;
		if (_t838 >= 0.000000) {
			_t839 = _t838;
		}
		else {
			_t841 = -_t838;
			_t839 = _t841;
		}
		_t842 = sqrt(_t839);
		_t843 = _t842 / _t809;
		if (_t843 <= 0.000000) {
			_t844 = 1.000000;
		}
		else {
			_t846 = vertParams[114] * _t843;
			_t847 = (float)1.0 / (_t846);
			if (_t847 >= 1.600000) {
				_t848 = 1.000000;
			}
			else {
				_t850 = _t847 * _t847;
				_t851 = 2.577000 * _t850;
				_t852 = 2.276000 * _t847;
				_t853 = 1.000000+_t852;
				_t854 = _t853+_t851;
				_t855 = 2.181000 * _t850;
				_t856 = 3.535000 * _t847;
				_t857 = _t856+_t855;
				_t858 = _t857 / _t854;
				_t848 = _t858;
			}
			_t844 = _t848;
		}
		_t859 = _t844 * _t822;
		_t860 = sqrt(_t809);
		_t861 = 0.200000 * _t860;
		_t862 = 1.200000-_t861;
		_t863 = vertParams[114] * _t862;
		_t864 = _t765 * _t765;
		_t865 = _t863 * _t863;
		_t866 = _t766 * _t766;
		_t867 = _t866 / _t865;
		_t868 = _t863 * _t863;
		_t869 = _t767 * _t767;
		_t870 = _t869 / _t868;
		_t871 = _t870+_t867;
		_t872 = _t871 / _t864;
		_t873 = _t864 * _t864;
		_t874 = 3.141593 * _t863;
		_t875 = _t874 * _t863;
		_t876 = _t875 * _t873;
		_t877 = -_t872;
		_t878 = exp(_t877);
		_t879 = _t878 / _t876;
		_t880 = _t765 * _t879;
		_t881 = sqrt(_t812);
		_t882 = 0.200000 * _t881;
		_t883 = 1.200000-_t882;
		_t884 = vertParams[114] * _t883;
		_t885 = _t765 * _t765;
		_t886 = _t884 * _t884;
		_t887 = _t766 * _t766;
		_t888 = _t887 / _t886;
		_t889 = _t884 * _t884;
		_t890 = _t767 * _t767;
		_t891 = _t890 / _t889;
		_t892 = _t891+_t888;
		_t893 = _t892 / _t885;
		_t894 = _t885 * _t885;
		_t895 = 3.141593 * _t884;
		_t896 = _t895 * _t884;
		_t897 = _t896 * _t894;
		_t898 = -_t893;
		_t899 = exp(_t898);
		_t900 = _t899 / _t897;
		_t901 = _t765 * _t900;
		if (_t707 > 0.000000) {
			_t907 = 4.000000 * _t705;
			_t908 = _t791 * _t783;
			_t909 = _t908 * _t859;
			_t910 = _t909 / _t907;
			if (_t910 >= 0.000000) {
				_t911 = _t910;
			}
			else {
				_t913 = -_t910;
				_t911 = _t913;
			}
			_t914 = vertParams[106] * _t911;
			_t915 = vertParams[107] * _t911;
			_t916 = vertParams[108] * _t911;
			_t917 = 4.000000 * _t744;
			_t918 = _t880 * _t791;
			_t919 = _t918 / _t917;
			if (_t919 >= 0.000000) {
				_t920 = _t919;
			}
			else {
				_t922 = -_t919;
				_t920 = _t922;
			}
			_t923 = 4.000000 * _t743;
			_t924 = _t901 * _t791;
			_t925 = _t924 / _t923;
			if (_t925 >= 0.000000) {
				_t926 = _t925;
			}
			else {
				_t928 = -_t925;
				_t926 = _t928;
			}
			_t902 = _t914;
			_t903 = _t915;
			_t904 = _t916;
			_t905 = _t920;
			_t906 = _t926;
		}
		else {
			_t929 = _t708 * _t744;
			_t930 = _t743+_t929;
			_t931 = _t710 * _t743;
			_t932 = _t744+_t931;
			_t933 = (float)1.0 / (_t708);
			_t934 = _t933 * _t933;
			_t935 = _t930 * _t930;
			_t936 = _t705 * _t935;
			_t937 = _t708 * _t708;
			_t938 = 1.000000-_t791;
			_t939 = _t938 * _t783;
			_t940 = _t939 * _t859;
			_t941 = _t940 * _t937;
			_t942 = _t941 * _t743;
			_t943 = _t942 * _t744;
			_t944 = _t934 * _t943;
			_t945 = _t944 / _t936;
			if (_t945 >= 0.000000) {
				_t946 = _t945;
			}
			else {
				_t948 = -_t945;
				_t946 = _t948;
			}
			_t949 = vertParams[109] * _t946;
			_t950 = vertParams[110] * _t946;
			_t951 = vertParams[111] * _t946;
			_t952 = _t930 * _t930;
			_t953 = _t708 * _t708;
			_t954 = _t953 * _t744;
			_t955 = 1.000000-_t791;
			_t956 = _t880 * _t955;
			_t957 = _t956 * _t954;
			_t958 = _t957 / _t952;
			if (_t958 >= 0.000000) {
				_t959 = _t958;
			}
			else {
				_t961 = -_t958;
				_t959 = _t961;
			}
			_t962 = _t932 * _t932;
			_t963 = _t710 * _t710;
			_t964 = _t963 * _t743;
			_t965 = 1.000000-_t791;
			_t966 = _t901 * _t965;
			_t967 = _t966 * _t964;
			_t968 = _t967 / _t962;
			if (_t968 >= 0.000000) {
				_t969 = _t968;
			}
			else {
				_t971 = -_t968;
				_t969 = _t971;
			}
			_t902 = _t949;
			_t903 = _t950;
			_t904 = _t951;
			_t905 = _t959;
			_t906 = _t969;
		}
		_t635 = _t902;
		_t636 = _t903;
		_t637 = _t904;
		_t638 = _t706;
		_t639 = _t905;
		_t640 = _t906;
	}
	else if (vertParams[105] == 0.000000) {
		_t972 = _t152 * _t246 + _t153 * _t247 + _t154 * _t248;
		if (_t972 > 0.000000) {
			_t973 = _t152;
			_t974 = _t153;
			_t975 = _t154;
			_t976 = _t972;
		}
		else {
			_t978 = -_t152;
			_t979 = -_t153;
			_t980 = -_t154;
			_t981 = -_t972;
			_t973 = _t978;
			_t974 = _t979;
			_t975 = _t980;
			_t976 = _t981;
		}
		_t982 = _t973 * _t266 + _t974 * _t267 + _t975 * _t268;
		_t983 = _t982 * 0.318310;
		_t984 = _t976 * 0.318310;
		_t985 = _t983 * vertParams[106];
		_t986 = _t983 * vertParams[107];
		_t987 = _t983 * vertParams[108];
		_t635 = _t985;
		_t636 = _t986;
		_t637 = _t987;
		_t638 = _t982;
		_t639 = _t983;
		_t640 = _t984;
	}
	else {
		_t635 = 0.000000;
		_t636 = 0.000000;
		_t637 = 0.000000;
		_t638 = 0.000000;
		_t639 = 0.000000;
		_t640 = 0.000000;
	}
	_t988 = (float)1.0 / (vertParams[115]);
	_t989 = _t635 * _t269;
	_t990 = _t989 * _t988;
	_t991 = _t636 * _t270;
	_t992 = _t991 * _t988;
	_t993 = _t637 * _t271;
	_t994 = _t993 * _t988;
	if (vertParams[49] == 0.000000) {
		_t995 = 0.000000;
	}
	else {
		_t997 = vertParams[115] * _t273;
		_t998 = _t639 / _t997;
		_t999 = _t998 * _t998;
		_t995 = _t999;
	}
	_t1000 = _t640 * _t640;
	_t1001 = _t273 * _t272;
	_t1002 = _t274 * _t638;
	_t1003 = _t1002 / _t1001;
	_t1004 = _t1003 * _t1003;
	_t1005 = _t1004 * _t265;
	_t1006 = _t995+1.000000;
	_t1007 = _t1006+_t1005;
	_t1008 = (float)1.0 / (_t1007);
	_t1009 = _t990 * _t1008;
	_t1010 = _t992 * _t1008;
	_t1011 = _t994 * _t1008;
	_t1012 = _t1011 * 0.072169;
	_t1013 = _t1010 * 0.715160;
	_t1014 = _t1009 * 0.212671;
	_t1015 = _t1014+_t1013;
	_t1016 = _t1015+_t1012;
	_t1017 = log(_t1016);
	logLumValue[0] = _t1017;
}
